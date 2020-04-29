#include <iostream>
#include "Student.h"
#include <string>
#include <fstream>

using namespace std;

void Student::copy(int* a)
{
	for (int i = 0; i < 5; i++)
		ball[i] = a[i];
}

float Student::averagemark(int* a)
{
	float n = 0;
	for (int i = 0; i < 5; i++)
		n =+ a[i];
	return n/5;
}

Student::Student()
{
	name = "";
	gr = 0;

}

Student::Student(string s, int g, int* a)
{
	name = s;
	gr = g;
	copy(a);
}

Student::Student(string s)
{

	string gropa;
	int l = s.size()-1;
	for (int i = 4; i >=0; i--)
	{
		ball[i] = s[l]-48;
		l--;
	}

	l--;
	while (s[l]!=' ')
	{
		gropa = s[l]+gropa;
		l--;
	}
	gr = stoi(gropa);
	for (int i = 0; i < l; i++)
		name += s[i];
}

Student::Student(Student& s)
{
	name = s.name;
	gr = s.gr;
	copy(s.ball);
}

Student& Student::operator=(Student& s)
{
	this->name = s.name;
	this->gr = s.gr;
	this->copy(s.ball);
	return *this;
}

void Student::print()
{
	cout << name << ' ' << gr << ' ';
	for (int i = 0; i < 5; i++)
		cout << ball[i];
	cout << endl;
}

bool Student::operator>(Student& a)
{
	bool n = true;
	if (gr < a.gr)
		n = false;
	if (gr == a.gr)
		if (name <= a.name)
			n = (averagemark(ball) > averagemark(a.ball));
	return n;
}

bool Student::operator<(Student& a)
{
	bool n = true;
	if (gr > a.gr)
		n = false;
	if (gr == a.gr)
		if (name >= a.name)
			n = (averagemark(ball) < averagemark(a.ball));
	return n;
}

bool Student::operator==(Student& a)
{
	return gr == a.gr && name==a.name && averagemark(ball) == averagemark(a.ball);
}

bool Student::operator!=(Student& a)
{
	return gr != a.gr || name != a.name || averagemark(ball) != averagemark(a.ball);
}

ostream& operator<<(ostream& os, const Student& a)
{
	return os << a.name << " " << a.gr ;

}

istream& operator>>(istream& os, Student& a)
{
	return os >> a.name >> a.gr;
}

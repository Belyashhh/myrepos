#include <iostream>
#include "Student.h"
#include <string>
#include <fstream>

using namespace std;

void Student::markArray(string m)
{
	for (int i = 0; i < 5; i++)
		ball[i] = m[i]-48;
	Averagemark();
}

void Student::copy(int* a)
{
	for (int i = 0; i < 5; i++)
		ball[i] = a[i];
}

void Student::Averagemark()
{
	float n = 0;
	for (int i = 0; i < 5; i++)
		n += ball[i];
	averagemark = n / 5;

}

void Student::ballstr()
{
	for (int i = 0; i < 5; i++)
		mark += ball[i] + 48;
	Averagemark();
}


Student::Student()
{
	name = "";
	gr = 0;
	mark = "";
}

Student::Student(string s, int g, string a)
{
	name = s;
	gr = g;
	mark = a;
	markArray(a);
}

Student::Student(string s, int g, int* a)
{
	name = s;
	gr = g;
	copy(a);
	ballstr();
}

Student::Student(string s)
{

	string gropa;
	int l = s.size()-1;
	for (int i = 4; i >=0; i--)
	{
		ball[i] = s[l]-48;
		mark = s[l] + mark;
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
	Averagemark();
}

Student::Student(Student& s)
{
	name = s.name;
	gr = s.gr;
	copy(s.ball);
	averagemark = s.averagemark;
	mark = s.mark;
}

Student& Student::operator=(Student& s)
{
	this->name = s.name;
	this->gr = s.gr;
	this->averagemark = s.averagemark;
	this->mark = s.mark;
	this->copy(s.ball);
	return *this;
}


bool Student::operator>(Student& a)
{
	if (averagemark)
		markArray(mark);
	bool n = true;
	if (gr < a.gr)
		n = false;
	if (gr == a.gr)
		if (name <= a.name)
			n = (averagemark > a.averagemark);
	return n;
}

bool Student::operator<(Student& a)
{
	if (averagemark)
		markArray(mark);
	bool n = true;
	if (gr > a.gr)
		n = false;
	if (gr == a.gr)
		if (name >= a.name)
			n = (averagemark < a.averagemark);
	return n;
}

bool Student::operator==(Student& a)
{
	if (averagemark)
		markArray(mark);
	return gr == a.gr && name==a.name && averagemark == a.averagemark;
}

bool Student::operator!=(Student& a)
{
	if (averagemark)
		markArray(mark);
	return gr != a.gr || name != a.name || averagemark != a.averagemark;
}

ostream& operator<<(ostream& os, const Student& a)
{
	return os << a.name << " " << a.gr <<" "<<a.mark;
}

istream& operator>>(istream& os, Student& a)
{
	return os >> a.name >> a.gr >> a.mark;
}

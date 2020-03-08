#include <iostream>
#include "Student.h"
#include <string>

using namespace std;

void Student::copy(int* a)
{
	for (int i = 0; i < 5; i++)
		ball[i] = a[i];
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

void Student::print()
{
	cout << name << ' ' << gr << ' ';
	for (int i = 0; i < 5; i++)
		cout << ball[i];
	cout << endl;
}

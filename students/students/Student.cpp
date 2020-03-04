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
#pragma once
#include <string>
#include <iostream>
using namespace std;
class Student
{
	string name;
	int gr;
	int ball[5] = { 0 };
	void copy(int* a);
	
public:
	Student();
	Student(string s, int g, int* a);
};


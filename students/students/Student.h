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
	float averagemark(int* a);

public:
	Student();
	Student(string s, int g, int* a);
	Student(string s);
	Student(Student& s);
	Student& operator=(Student& s);
	void print();

	bool operator>(Student& a);
	bool operator<(Student& a);
	bool operator==(Student& a);
	bool operator!=(Student& a);

	friend ostream& operator << (ostream& os, const Student& a);
	friend istream& operator >>(istream& os, Student& a);
};


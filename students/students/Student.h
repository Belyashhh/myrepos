#pragma once
#include <string>
#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	int gr;
	int ball[5] = { 0 };

	string mark;
	float averagemark=0;

	void markArray(string m);
	void copy(int* a);
	void Averagemark();
	void ballstr();

public:
	Student();
	Student(string s, int g, string a);
	Student(string s, int g, int* a);
	Student(string s);
	Student(Student& s);
	Student& operator=(Student& s);

	bool operator>(Student& a);
	bool operator<(Student& a);
	bool operator==(Student& a);
	bool operator!=(Student& a);

	friend ostream& operator << (ostream& os, const Student& a);
	friend istream& operator >>(istream& os, Student& a);
};


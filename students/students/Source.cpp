// student.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>
#include "Student.h"
#include <string>
#include <fstream>

using namespace std;

int main()
{
	//Student st1("misha 14 12345");
	string a= "misha 14 12345";
	Student st2(a);
	st2.print();

	Student pizduky[20];
//	pizduky[0] = st2;
//	pizduky[0].print();


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "\n\n";


	string filename, t;


	filename = "D:\\��������\\students.txt";
	fstream fff;
	//fff.open(filename, fstream::in | fstream::out | fstream::app);
	fff.open(filename, fstream::in | fstream::app);


//	Student temp;
	for (int i = 0; i < 20; i++)
	{
		getline(fff, t);
	//	cout << t << endl;
		Student temp(t);
		pizduky[i] = temp;
		pizduky[i].print();

	}


	fff.close();



}
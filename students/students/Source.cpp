// student.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>
#include "Student.h"
#include <string>

using namespace std;

int main()
{
	//Student st1("misha 14 12345");
	string a= "misha 14 12345";
	Student st2(a);
	st2.print();
}
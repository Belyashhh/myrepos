// student.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Student.h"
#include "sort.h"
#include <string>
#include <fstream>

using namespace std;

int main()
{
//	//Student st1("misha 14 12345");
//	string a= "misha 14 12345";
//	Student st2(a);
//	cout << st2;
//
//	Student pizduky[20];
////	pizduky[0] = st2;
////	pizduky[0].print();


/////////////////////////////////////////////////////////////////////////////////////////////////
//	cout << "\n\n";
//
//
//	string filename, t;
//
//
//	filename = "D:\\сиплюлюс\\students.txt";
//	fstream fff;
//	//fff.open(filename, fstream::in | fstream::out | fstream::app);
//	fff.open(filename, fstream::in | fstream::app);
//
//
////	Student temp;
//	for (int i = 0; i < 20; i++)
//	{
//		getline(fff, t);
//	//	cout << t << endl;
//		Student temp(t);
//		pizduky[i] = temp;
//		cout << pizduky[i] <<endl;
//
//	}
//
//
//	fff.close();
/////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "\n\n\n";


	Array<Student> cheliki(20);
	ifstream in("students.txt");
	in >> cheliki;

	cheliki.BubleSort();//пузырьковая сортировка
	cout << cheliki << endl;
	cheliki.SelectSort();//сортировка выбором
	cout << cheliki << endl;
	cheliki.ShelSort();//сортировка Шелла
	cout << cheliki << endl;
	cheliki.QuickSort();//сортировка Хора
	cout << cheliki << endl;
	cheliki.InsertSort();//сортировка вставками
	cout << cheliki << endl;

}
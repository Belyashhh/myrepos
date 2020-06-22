#include <iostream>
#include "Student.h"
#include "sort.h"
#include <string>
#include <fstream>
#include "list.h"

using namespace std;

int main()
{
	/*
	Array<Student> cheliki(20);
	ifstream in("students.txt");
	in >> cheliki;
	cheliki.BubleSort();//пузырькова€ сортировка	
	cheliki.SelectSort();//сортировка выбором	
	cheliki.ShelSort();//сортировка Ўелла
	cheliki.QuickSort();//сортировка ’ора
	cheliki.InsertSort();//сортировка вставками

	cout << cheliki << endl;
	*/


	Student s1("igory 12 45355");
	Student s2("georg 37 22253");
	Student s3("tolya 41 31454"); 
	Student s4("vlodimir 21 13454");

	List<Student> st;
	st.push_back(s1);
	st.push_back(s2);
	st.push_back(s3);
	st.push_back(s4);
	

	for (int i = 0; i < st.GetSize(); i++)
	{
		cout << st[i] << endl;
	}

	cout << endl;
	st.InsertSort();

	for (int i = 0; i < st.GetSize(); i++)
	{
		cout << st[i] << endl;
	}
}
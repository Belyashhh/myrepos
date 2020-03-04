#include <iostream>
#include "Stroki.h"

Stroki::Stroki()
{
}

Stroki::Stroki(char* s)
{
	n = strlen(s);
	str = new char[n+1];
	strcpy_s(str, n + 1, s);
}


Stroki::Stroki(const char* s)
{
	n = strlen(s);
	str = new char[n + 1];
	strcpy_s(str, n + 1, s);
}

Stroki::Stroki(const Stroki& a)
{

	n = a.n;
	str = new char[n + 1];
	strcpy_s(str, n + 1, a.str);
}

ostream& operator<<(ostream& a, const Stroki& s)
{
	return a << s.str;

}

istream& operator>>(istream& a, Stroki& s)
{
	char arr[1000];
	a.getline(arr, 1000);
	if (s.str)delete[]s.str;
	s.n = strlen(arr);
	s.str = new char[s.n + 1];
	strcpy_s(s.str, s.n + 1, arr);
	return a;
}

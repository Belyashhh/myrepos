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

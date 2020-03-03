#pragma 
#include <iostream>
using namespace std;
class Stroki
{
	char* str;
	int n;
public:
	Stroki();
	Stroki(char* s);
	Stroki(const char* s);
	Stroki(const Stroki& a);
	friend ostream& operator<< (ostream& a, const Stroki& s);
	friend istream& operator>> (istream& a, Stroki& s);

};


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
	int Ineger();
};

//void main() {
//	string str = "1234567890";
//	int num = NULL;
//	for (int i = 0; i < str.length(); i++) {
//		num = num * 10 + str[i] - 0x30;
//	}
//	cout << num;
//}
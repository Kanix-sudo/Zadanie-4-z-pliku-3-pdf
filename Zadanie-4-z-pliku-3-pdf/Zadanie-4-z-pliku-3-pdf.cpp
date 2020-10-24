#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	int j;
	int k;
	int l;

	a = sizeof(bool) * 8;
	b = sizeof(char) * 8;
	c = sizeof(unsigned short int) * 8;
	d = sizeof(short int) * 8;
	e = sizeof(unsigned long int);
	f = sizeof(long) * 8;
	g = sizeof(int) * 8;
	h = sizeof(unsigned long long) * 8;
	i = sizeof(long long) * 8;
	j = sizeof(unsigned int) * 8;
	k = sizeof(float) * 8;
	l = sizeof(double) * 8;

	cout << "Rozmiar bool : " << sizeof(bool) << " B  (" << a << " b)" << endl;
	cout << "Rozmiar char : " << sizeof(char) << " B  (" << b << " b)" << endl;
	cout << "Rozmiar unsigned short int : " << sizeof(unsigned short int) << " B  (" << c << " b)" << endl;
	cout << "Rozmiar short int : " << sizeof(short int) << " B  (" << d << " b)" << endl;
	cout << "Rozmiar unsigned long int : " << sizeof(unsigned long int) << " B  (" << e << " b)" << endl;
	cout << "Rozmiar long : " << sizeof(long) << " B  (" << f << " b)" << endl;
	cout << "Rozmiar int : " << sizeof(int) << " B  (" << g << " b)" << endl;
	cout << "Rozmiar unsigned long long : " << sizeof(unsigned long long) << " B  (" << h << " b)" << endl;
	cout << "Rozmiar long long : " << sizeof(long long) << " B  (" << i << " b)" << endl;
	cout << "Rozmiar unsigned int : " << sizeof(unsigned int) << " B  (" << j << " b)" << endl;
	cout << "Rozmiar float : " << sizeof(float) << " B  (" << k << " b)" << endl;
	cout << "Rozmiar double : " << sizeof(double) << " B  (" << l << " b)" << endl;

	return(0);
}
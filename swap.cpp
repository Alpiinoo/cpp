#include <iostream>
#include <conio.h>
using namespace std;

void swap(int &, int &);

int main() {
	int x;
	int y;
	cout << ("X ve Y yi gir:");
	cin >> x >> y;
	swap(x, y);
	cout << x << "\t" << y;
	_getch();
	return 0;
}

void swap(int &a, int &b) {
	int t;

	t = a;
	a = b;
	b = t;

	//cout << a << "\t" << b;
}
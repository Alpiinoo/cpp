#include <iostream>
#include <conio.h>
using namespace std;

int EBOB(int a, int b) {
	int kalan;
	while (b != 0) {
		kalan = a % b;
		a = b;
		b = kalan;
	}
	return a;
}

int main() {
	int sayi1, sayi2;
	cout << "Iki tane tam sayi girin:";
	cin >> sayi1 >> sayi2;

	int ebob= EBOB(sayi1, sayi2);
	cout << ebob;
	_getch();
	return 0;
}
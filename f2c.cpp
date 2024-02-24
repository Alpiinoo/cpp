#include <iostream>
#include <conio.h>

using namespace std;

float celcius(int f) {
    float c = (5.0 / 9.0) * (f - 32); 
    return c;
}

int main() {
    for (float fah = 20; fah < 71; fah++) {
     float c = celcius(fah);
     cout << "F: " << fah <<"\t"<<"C: " << c << "\n";
    }

    _getch();
    return 0;
}
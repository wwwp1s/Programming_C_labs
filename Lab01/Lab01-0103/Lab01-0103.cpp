#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int a = 0;
    int b = 0;
    double pow1, pow2, arfpows, abs1, abs2, arfabss;

    cout << "Введiть два цiлих числа:";
    cin >> a;
    cin >> b;
    pow1 = pow(a, 2);
    pow2 = pow(b, 2);
    arfpows = (pow1 + pow2) / 2;

    abs1 = abs(a);
    abs2 = abs(b);
    arfabss = (abs1 + abs2) / 2;

    cout << "середнє арифметичне квадратiв: " << arfpows << endl;
    cout << "середнє арифметичне модулiв: " << arfabss;
    return 0;
}
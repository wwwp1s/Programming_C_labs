#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int S, T, v = 0;
    cout << ("Введiть S: ");
    cin >> S;
    cout << ("Введiть T: ");
    cin >> T;
    v = S / T;
    if (v >= 60)
    {
        printf("Водiй порушив правила");
    }
    else
    {
        printf("Водiй не порушував. v = %d", v);
    }

    return 0;
}
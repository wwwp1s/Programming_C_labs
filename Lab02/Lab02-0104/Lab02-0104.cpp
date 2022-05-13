#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double X, Y, Z, yz, xx;
    cout << "введiть X ";
    cin >> X;

    cout << "введiть Y ";
    cin >> Y;
    cout << "введiть Z ";
    cin >> Z;

    xx = abs(X);
    yz = (pow(Y, 2)) + (pow(Z, 2));


    if (xx > yz)
    {
        cout << "X = " << X;
    }
    else
    {
        if (abs(Y) > (pow(Z, 2) + pow(X, 2)))
        {
            cout << "Y = " << Y;
        }
        else
        {

            if (abs(Z) > (pow(X, 2) + pow(Y, 2)))
            {
                cout << "Z = " << Z;
            }
        }
    }

    if ((xx < yz) && (abs(Y) < (pow(Z, 2) + pow(X, 2))) && (abs(Z) < (pow(X, 2) + pow(Y, 2))))
    {
        cout << "Не пiдходить пiд жодну умову";
    }
}
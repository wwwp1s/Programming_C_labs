// Швидкість першого автомобіля Y км/год, другого – Y км/год, відстань між ними 120 км.
//Визначити відстань між ними через T годин, якщо автомобілі віддаляються один від одного
// рівноприскоренно із прискоренням A км/с2.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	float T, A, Y, S;
	cout << "час(год): ";
	cin >> T;
	cout << "прискорення(км / c): ";
	cin >> A;
	cout << "швидкiсть автомобiлiв(км/год): ";
	cin >> Y;
	S = 120 + 2 * Y * T + (2 * A * (T * T) / 4);
	cout << "вiдстань мiж авто: " << S;
}
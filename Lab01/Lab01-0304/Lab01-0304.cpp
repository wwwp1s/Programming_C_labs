//Дана сторона рівностороннього трикутника. Знайти площу цього трикутника і радіуси
//вписаного і описаного кіл.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double a, S, R, r, k;
	cout << "введiть а: ";
	cin >> a;
	k = sqrt(3);
	S = (pow(a, 2) * k) / 4;
	R = (a / k);
	r = (a / (2 * k));
	cout << "S= " << S << endl;
	cout << "R= " << R << endl;
	cout << "r= " << r;
	return 0;
}


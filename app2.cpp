#include <conio.h>
#include <iostream>

using namespace std;
float P;
float S;
int V = 1000;
int VT = 1100;
int K = 1;
int gh;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите процент, под который вы сделали вложение" << endl;
	cin >> P;

	S = 1000;
	while ()
	{
		S *= P;
		V *= P;
		++K;

	}
	if ()
	{
		cout << "С таким процентом, вложенная сумма превратится через " << K << " месяцев" << endl;

	}
	else
	{
		cout << "С таким процентом, вложенная сумма превратится через " << K << " месяца" << endl;
	}

	cout << "итоговая сумма: " << S << "р." << endl;


	gh = _getch();
}


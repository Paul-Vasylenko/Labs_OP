﻿#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	float i;														//рахуємо кроки до числа заданого
	i = 4;															//початкова точка
	long double v,v1,v2,v3;											//змінні дані в умові
	v1 = 0;
	v2 = 0;
	v3 = 1.5;
	cout << "Enter n: ";
	cin >> n;														//введення числа 
	if (n >= 4) 
	{													//потрібно щоб число n було >= i, інакше помилка
		for (i = 4; i <= n;i++) 
		{									//початок циклу: і =4, доки і не стане == n додаємо до нього 1 і : 
				v = (i + 1) / (i * i + 1) * v3 - v2 * v1;			//Рахуємо число
				v1 = v2;											//змінюємо значення зміннних.
				v2 = v3;											//змінюємо значення зміннних.
				v3 = v;												//змінюємо значення зміннних.
		}
		cout << v << endl;											//По завершенню циклу маємо кінцеве значення шуканого числа.
	}
	else {															//інакше помилка
		cout << "Error" << endl;
	}
	return 0;
}

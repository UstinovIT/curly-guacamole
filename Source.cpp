#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float a;
	float b;
	int c;
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	cout << "Выберите операцию:(1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 6 - факториал)" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
	{
		cout << "Результат сложения:" << endl;
		cout << (a + b) << endl;
		break;
	}
	case 2:
	{
		cout << "Результат вычитания:" << endl;
		cout << (a - b);
		break;
	}
	case 3:
	{
		cout << "Результат умножения:" << endl;
		cout << (a * b);
		break;
	}
	case 4:
	{
		cout << "Результат деления:" << endl;
		if (b == 0)
		{
			cout << "Делить на ноль нельзя";
		}
		else
		{
			cout << (a / b) << endl;
		}
		break;
	}
	case 5:
	{
		cout << "Результат возведения в степень:" << endl;
		int i;
		int result = 1;
		for (i = 0; i < b; i++)
		{
			result *= a;
		}
		cout << result << endl;
		break;
	}
	case 6:
	{
		int i = 1;
		int factorial = 1;
		while (i < a)
		{
			factorial *= ++i;
		}
		cout << "Факториал первого числа = " << factorial << endl;

		int h = 1;
		int factorial2 = 1;
		while (h < b)
		{
			factorial2 *= ++h;
		}

		cout << "Факториал второго числа = " << factorial2 << endl;
	}
	default:
	{
		if (c > 6)
		{
			cout << "Введите число от 1 до 6!" << endl;
		}
		break;
	}
	return 0;
	}
}
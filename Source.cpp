#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float a;
	float b;
	int c;
	cout << "������� ������ �����" << endl;
	cin >> a;
	cout << "������� ������ �����" << endl;
	cin >> b;
	cout << "�������� ��������:(1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������, 6 - ���������)" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
	{
		cout << "��������� ��������:" << endl;
		cout << (a + b) << endl;
		break;
	}
	case 2:
	{
		cout << "��������� ���������:" << endl;
		cout << (a - b);
		break;
	}
	case 3:
	{
		cout << "��������� ���������:" << endl;
		cout << (a * b);
		break;
	}
	case 4:
	{
		cout << "��������� �������:" << endl;
		if (b == 0)
		{
			cout << "������ �� ���� ������";
		}
		else
		{
			cout << (a / b) << endl;
		}
		break;
	}
	case 5:
	{
		cout << "��������� ���������� � �������:" << endl;
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
		cout << "��������� ������� ����� = " << factorial << endl;

		int h = 1;
		int factorial2 = 1;
		while (h < b)
		{
			factorial2 *= ++h;
		}

		cout << "��������� ������� ����� = " << factorial2 << endl;
	}
	default:
	{
		if (c > 6)
		{
			cout << "������� ����� �� 1 �� 6!" << endl;
		}
		break;
	}
	return 0;
	}
}
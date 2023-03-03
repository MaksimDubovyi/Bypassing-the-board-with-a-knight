#include <iostream>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include "windows.h"
#include "Headers.h"
using namespace std;

int main()
{

	const int size1 = 8;;
	int  x = 5, z = 1, move = 63;
	int array1[size1][size1] = { 0 };
	cout << "                                                      ***Chess knight move!!!***\n";
	cout << "Enter horizontal coordinate (1 - 8) - ";
	cin >> x;
	x = x - 1;
	cout << "Enter vertical coordinate (a - h) - ";
	int y = _getch();
	switch (y)
	{
	case 97:
		y = 0;
		cout << "a";
		break;
	case 98:
		y = 1;
		cout << "b";
		break;
	case 99:
		y = 2;
		cout << "c";
		break;
	case 100:
		y = 3;
		cout << "d";
		break;
	case 101:
		y = 4;
		cout << "e";
		break;
	case 102:
		y = 5;
		cout << "f";
		break;
	case 103:
		y = 6;
		cout << "g";
		break;
	case 104:
		y = 7;
		cout << "h";
		break;
	}
	cout << endl << endl;
	chess(x, y, z, move, array1, size1);
	print(array1, size1);

	system("pause");
	system("cls");
}

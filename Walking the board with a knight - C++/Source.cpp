#include <iostream>
#include <ctime>
#include <iomanip>
#include <Windows.h>
using namespace std;


//пичать chess
void print(int array1[][8], int size1)
{
	int a = 1;
	char s = 179, s1 = 194, s2 = 218, s3 = 191, s4 = 196, z1 = 195, z2 = 197, z3 = 180;
	cout << endl;
	cout << "         a    " << "b    " << "c    " << "d    " << "e    " << "f    " << "g    " << "h    \n";

	cout << "       " << s2 << s4 << s4 << s4 << s4 << s1 << s4 << s4 << s4 << s4 << s1 << s4 << s4 << s4 << s4 << s1 << s4 << s4 << s4 << s4 << s1 << s4 << s4 << s4 << s4 << s1 << s4 << s4 << s4 << s4 << s1 << s4 << s4 << s4 << s4 << s1 << s4 << s4 << s4 << s4 << s3 << "\n";


	for (int i = 0; i < size1; i++)
	{
		cout << "   " << a << "   ";

		for (int j = 0; j < size1; j++)
		{

			if (array1[i][j] < 10)
			{
				cout << "|" << " " << array1[i][j] << "  ";
			}
			else
			{

				cout << "|" << array1[i][j] << "  ";
			}

		}
		cout << "|" << endl << "       " << z1 << s4 << s4 << s4 << s4 << z2 << s4 << s4 << s4 << s4 << z2 << s4 << s4 << s4 << s4 << z2 << s4 << s4 << s4 << s4 << z2 << s4 << s4 << s4 << s4 << z2 << s4 << s4 << s4 << s4 << z2 << s4 << s4 << s4 << s4 << z2 << s4 << s4 << s4 << s4 << z3 << "\n";

		a++;
	}
}

//рекурсия
int chess(int x, int y, int z, int b, int array1[][8], int size1)
{

	const int size = 8;
	int array[size][size] = { 60,11,56,7,54,3,42,1,57,8,59,62,31,64,53,4,12,61,10,55,6,41,2,43,9,58,13,32,63,30,5,52,34,17,36,23,40,27,44,29,37,14,33,20,47,22,51,26,18,35,16,39,24,49,28,45,15,38,19,48,21,46,25,50 };

	array1[x][y] = z;

	if (b == 0)
	{
		return 0;
	}


	else
	{

		if (array[x - 2][y + 1] == (array[x][y] + 1))
		{

			array1[x - 2][y + 1] = ++z;
			x -= 2;
			y += 1;

		}
		else if (array[x - 1][y + 2] == (array[x][y] - 63))
		{
			array1[x - 1][y + 2] = ++z;
			x -= 1;
			y += 2;
		}
		else if (array[x - 2][y - 1] == (array[x][y] + 1))
		{
			array1[x - 2][y - 1] = ++z;
			x -= 2;
			y -= 1;
		}
		else if (array[x + 2][y - 1] == (array[x][y] + 1))
		{
			array1[x + 2][y - 1] = ++z;
			x += 2;
			y -= 1;
		}
		else if (array[x + 2][y + 1] == (array[x][y] + 1))
		{
			array1[x + 2][y + 1] = ++z;
			x += 2;
			y += 1;
		}
		else if (array[x + 1][y + 2] == (array[x][y] + 1))
		{
			array1[x + 1][y + 2] = ++z;
			x += 1;
			y += 2;
		}
		else if (array[x + 1][y - 2] == (array[x][y] + 1))
		{
			array1[x + 1][y - 2] = ++z;
			x += 1;
			y -= 2;
		}
		else if (array[x - 1][y - 2] == (array[x][y] + 1))
		{
			array1[x - 1][y - 2] = ++z;
			x -= 1;
			y -= 2;
		}
		else if (array[x - 1][y + 2] == (array[x][y] + 1))
		{
			array1[x - 1][y + 2] = ++z;
			x -= 1;
			y += 2;
		}


		return 1 + chess(x, y, z, b - 1, array1, size1);
	}
}
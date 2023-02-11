/*----------------------------------------------------------------
Copyleft (c) 2023 Author: Jagadeesh Vasudevamurthy
file: p2.cpp
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
This file has p2 class definition
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
All includes here
YOU CANNOT INCLUDE ANY OTHER FILES
-----------------------------------------------------------------*/
#include "p2.h"

/*----------------------------------------------------------------
WRITE CODE BELOW
-----------------------------------------------------------------*/


//EOF

int p2::d1(int i, char c)
{
	int k, x, y, num = 0;											
	cout << "---------------------------- n = " << i <<"\n";		
	cout << "012345678";

	for (x = 0; x <= i; x++)
	{
		for (k = i; k > x; k--) {
			cout << " ";
		}
		for (y = 0; y < x; y++) {
			cout << "* ";
			num++;
		}
		cout << "\n";
	}
	cout << " N = " << i << " Number of * = " << num << "\n";
	return num;
}

	


int p2::d2(int i, char c)
{
	int  k, x, y, num = 0;									
	cout << "---------------------------- n = " << i << "\n";
	cout << "012345678" << "\n";

	for (x = 0; x <= i; x++)
	{
		for (k = 0; k < x; k++) {
			cout << " ";
		}
		for (y = i; y > x; y--) {
			cout << "* ";
			num++;
		}
		cout << "\n";
	}
	cout << " N = " << i << " Number of * = " << num << "\n";
	return num;
}

int p2::d3(int i, char c)
{
	int  s=1, x, y, k, num = 0;
	cout << "---------------------------- n = " << i << "\n";
	cout << "012345678" << "\n";
	i = (i-1)/2 ;

	for (x = 0; x <= i; x++)
	{
		for (y = i; y > x; y--)
		{
			cout << " ";
		}
		cout << "*";

		num++;

		if (x > 0)
		{
			for (k = 1; k <= s; k++)
			{
				cout << " ";
			}
			s += 2;
			cout << "*";
			num++;
		}
		
		cout << "\n";
	}
	s -= 4;
	for (x = 0; x <= i - 1; x++)
	{
		for (y = 0; y <= x; y++)
		{
			cout << " ";
		}
		cout << "*";
		num++;
		for (k = 1; k <= s; k++)
		{
			cout << " ";
		}
		s -= 2;
		if (x != i - 1)
		{
			cout << "*";
			num++;
		}
		cout << "\n";
	}
	

	cout << " N = " << i+1 << " Number of * = " << num << "\n";
	return num;
}

int p2::d4(int i, char c)
{
	int  x, y, num = 0;
	cout << "---------------------------- n = " << i << "\n";
	cout << "012345678" << "\n";

	for (x = 1; x <= i; x++)
	{
		for (y = 1; y <= x; y++)
		{
			cout << "*";
			num++;
		}
		cout << "\n";
	}
	for (x = i; x > 1; x--)
	{
		for (y = 1; y < x; y++)
		{
			cout << "*";
			num++;
		}
		cout << "\n";
	}
	cout << " N = " << i + 1 << " Number of * = " << num << "\n";
	return num;
}



int p2::d5(int i, char c)
{
	int  x, y, num = 0;
	cout << "---------------------------- n = " << i << "\n";
	cout << "012345678" << "\n";

	for (y = 1; y <= i; y++)
	{
		for (x = 1; x <= i; x++)
		{
				if((x+y-1)>=i) 
				{
					cout << "*";
					num++; 
				}else
					cout << " ";
		}
		cout << "\n";
	}
	for (y = i; y < i*2-1; y++)
	{
		for (x = 1; x <= i; x++)
		{
			if (y-x < i-1) {
				cout << "*";
				num++;
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	cout << " N = " << i << " Number of * = " << num << "\n";
	return num;
}

int p2::d6(int i, char c)
{

	int  k,x, y, num = 0;
	cout << "---------------------------- n = " << i << "\n";
	cout << "012345678" << "\n";

	for (x = 0; x <= i-1; x++)
	{
		cout << "\n";
		for (k = 0; k < x; k++) {
			cout << " ";
		}
		for (y = i; y > x; y--) {
			cout << "* ";
			num++;
		}
		
	}

	for (x = 0; x <= i; x++)
	{
		for (k = i; k > x; k--) {
			cout << " ";
		}
		for (y = 0; y < x; y++) {
			cout << "* ";
			num++;
		}
		cout << "\n";
	}
	cout << " N = " << i << " Number of * = " << num << "\n";
	return num;
}

void p2::riceOnChessBoard(int i)
{
	unsigned long long sum = 0;
	unsigned long long rice = 1;
	for (int i = 1; i <= 64; i++) {
		sum += rice; 
		cout << "Rice on Square " << i << " = " <<  rice << "\n";
		rice = rice * 2;
	}
	cout << "\n";
	cout << "Total rice = " << sum;


}



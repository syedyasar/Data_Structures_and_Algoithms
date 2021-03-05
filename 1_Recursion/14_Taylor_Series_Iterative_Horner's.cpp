/* 
	Purpose: 14 _Taylor Series Iterative_using Horner's Rule { 1+x/1! +x^2/2! + x^3/3! + x^4/4! + .......       }
	Date: 03-04-2021

 */

#include <iostream>

using namespace std;

double e(int x, int n)
{
	static double s=1;
	for(;n>0;n--)
		s= 1 + x*s/n ;

	return s;
}


int main()
{
	int x;
	cout << "Enter the value of x : "  << endl;
	cin >> x ; 
	cout << "e power " << x << " : " << e(x,15) << endl;

	return 0;
}


/* 
Input :1
Output: 2.71828

*/

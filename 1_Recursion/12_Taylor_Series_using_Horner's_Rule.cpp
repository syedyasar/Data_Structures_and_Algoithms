/* 
	Purpose: 12 12_Taylor Series using Horner's Rule { 1+x/1! +x^2/2! + x^3/3! + x^4/4! + .......       }
	Date: 03-02-2021

 */

#include <iostream>

using namespace std;

double e(int x, int n)
{
	static double s=1;
	if(n==0)
		return s;
	s= 1 + x*s/n ;
	return e(x,n-1);
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

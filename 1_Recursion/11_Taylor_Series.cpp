/* 
	Purpose: 11 Taylor Series { 1+x/1! +x^2/2! + x^3/3! + x^4/4! + .......       }
	Date: 03-02-2021

 */

#include <iostream>

using namespace std;

double e(int x, int n)
{
	static double p=1,f=1;
	double r;
	if(n==0) 
		return 1;
	
	r=e(x,n-1);
	p=p*x;
	f=f*n;

	return  r+ p/f;
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

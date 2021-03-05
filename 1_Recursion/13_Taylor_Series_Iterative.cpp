/* 
	Purpose: 13 _Taylor Series Iterative_using Horner's Rule { 1+x/1! +x^2/2! + x^3/3! + x^4/4! + .......       }
	Date: 03-04-2021

 */

#include <iostream>

using namespace std;

double e(int x, int n)
{
	double s=1;
	double num=1,den=1;
	
	for(int i=1;i<=n;i++){
		num*=x;
		den*=i;
		s+= num/den;	
	}

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

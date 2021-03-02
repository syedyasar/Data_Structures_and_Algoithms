/* 
	Purpose: 9 Factorial Using Recursion
	Date: 02-28-2021

 */

#include <iostream>

using namespace std;

int factorial_Recursion(int n)
{
	if(n==0) 
		return 1;

	return n * factorial_Recursion(n-1);
}

int factorial_loop(int n)
{
	int f=1;
	for(int i=1;i<=n;i++){
		f*=i;
	}

	return f;
}

int main()
{
	int n=0;
	cout << "Enter the value of n : "  << endl;
	cin >> n ;
	cout << factorial_Recursion(n)<< endl;
//	cout << factorial_loop(n)<< endl;		
	return 0;
}


/* 
Input :5
Output: 120

*/

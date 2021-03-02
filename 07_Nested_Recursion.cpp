/* 
	Purpose: 7_Nested_Recursion
	Date: 02-28-2021

 */

#include <iostream>

using namespace std;

int fun(int n)
{
	if(n>100)	
		return n-10;
	return fun(fun(n+11));
}

int main()
{
	int k=0;
	k=fun(95);
	cout << k << endl;

	return 0;
}

/* 
Output:
91

*/

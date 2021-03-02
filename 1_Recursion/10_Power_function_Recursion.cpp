/* 
	Purpose: 10 Power of N using Recursion
	Date: 03-31-2021

 */

#include <iostream>

using namespace std;

int power_Recursion(int b, int p)
{
	if(p==0) 
		return 1;

	return  b * power_Recursion(b,p-1);
}

int power1_Recursion(int b, int p)
{
	if(p==0) 
		return 1;
		if(p%2==0)
			return power1_Recursion(b*b,p/2);
		else
			return b* power1_Recursion(b*b,(p-1)/2) ;

}

int power_loop(int b , int p)
{
	int f=1;
	for(int i=1;i<=p;i++){
		f*=b;
	}

	return f;
}

int main()
{
	int base, pow;
	cout << "Enter the value of base and power : "  << endl;
	cin >> base >> pow ; 
	cout << power1_Recursion( base , pow )<< endl;
//	cout << power_Recursion( base , pow )<< endl;	
//	cout << power_loop( base , pow )<< endl;	
	return 0;
}


/* 
Input :2 5
Output: 32

*/

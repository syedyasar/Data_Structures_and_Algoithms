/* 
	Purpose: 16_NCR
	Date: 03-06-2021

 */

#include <iostream>

using namespace std;
//Factorial
int fact(int n){
	if(n==0|| n==1){
		return 1;
	}
	return fact(n-1)*n;
}

//NCR Using Loop
int ncr_loop(int n,int r){
	return fact(n)/(fact(n-r)*fact(r));
}

//NCR Using Recursion
int ncr_rec(int n,int r){
	if(r==0 || n==r){
		return 1;
	}
	return ncr_rec(n-1,r) + ncr_rec(n-1,r-1) ;
}


int main()
{
	int n,r;
	cout << "Enter the value of n and r to calculate nCr : "  << endl;
	cin >> n >> r;
//	cout << "NCR(" << n << "," << r <<  "): " << ncr_loop(n,r) << endl;
	cout << "NCR(" << n << "," << r <<  "): " << ncr_rec(n,r) << endl;
	return 0;
}


/* 
Input :4,2
Output: 6

*/

/* 
	Purpose: 15_Fibbonocci Series
	Date: 03-06-2021

 */

#include <iostream>

using namespace std;
// Using loop O(n)               
int fib_loop(int n)
{
	int f=0,s=1,t;
	if(n<=1){
		return n;
	}
	for(int i=2;i<=n; i++){
		t=f+s;
		f=s;
		s=t;
	}

	return s;
}

// Using recursion O(2^n)   
int fib_rec(int n){
	if(n<=1)  return n;
	return fib_rec(n-1) + fib_rec(n-2) ;
}

int F[100];

// Using recursion Memoization O(n)   
int mem_fib(int n){
	if(n<=1){
		F[n]=n;
		return n;
	} 
	if(F[n-1]==-1){
     	F[n-1] = fib_rec(n-1);
	}
	if(F[n-2]==-1){
     	F[n-2] = fib_rec(n-2);
	}
	F[n] = F[n-2] + F[n-1] ;
	return fib_rec(n-1) + fib_rec(n-2) ;
}


int main()
{
	int x,i;
	cout << "Enter the value of x : "  << endl;
	cin >> x ; 
	int F[x];
	for(i=0;i<x;i++){
		F[i]= -1;
	}
//	cout << "Fibbonocci Series output for given term - " << x << " : " << fib_loop(x) << endl;
//	cout << "Fibbonocci Series output for given term - " << x << " : " << fib_rec(x) << endl;
	cout << "Fibbonocci Series output for given term - " << x << " : " << mem_fib(x) << endl;

	return 0;
}


/* 
Input :10
Output: 55

*/

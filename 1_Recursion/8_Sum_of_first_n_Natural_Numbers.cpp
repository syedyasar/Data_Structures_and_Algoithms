/* 
	Purpose: 8 Sum of First N Natural Numbers
	Date: 02-28-2021

 */

#include <iostream>

using namespace std;

int sum_of_n_natural(int n)
{
	if(n==0)
		return 0;
	return sum_of_n_natural(n-1) +n;
}

int loop_sum_of_n_natural(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}

int formulae_sum_of_n_natural(int n){
	return (n*(n+1))/2;
}

int main()
{
	int n=0;
	cout << "Enter the value of n : "  << endl;
	cin >> n ;
	cout << sum_of_n_natural(n)<< endl;
//	cout << loop_sum_of_n_natural(n)<< endl;
//	cout << formulae_sum_of_n_natural(n)<< endl;
	return 0;
}
1
/* 
Input :10

Output: 55

*/

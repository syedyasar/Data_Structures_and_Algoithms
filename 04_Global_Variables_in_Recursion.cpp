/* 
	Purpose: 4_Global_Variables_in_recursion
	Date: 02-28-2021

 */

#include <iostream>

using namespace std;

int x=5;

int fun1(int n){
	
	if(n>0){
		x++;
		return fun1(n-1) + 2*x;
	}
	return 0;
	
}

int main() {
	
	int l;
	
	l=fun1(5);
	cout << l << endl;	

	l=fun1(5);
	cout << l << endl;	
	
	return 0;
}


/* 
Output:

x=5;

f(5) -> f(4) + _  -> 80 + 20 = 100
f(4) -> f(3) + _    -> 60 + 20 = 80
f(3) -> f(2) + _  -> 40 + 20 = 60
f(2) -> f(1) + _   ->  20 + 20 = 40
f(1) -> f(0) + _   - > 0 + 20 =  20

x= 10;

f(5) -> f(4) + _  -> 120 + 2*15  =  150
f(4) -> f(3) + _    -> 90 + 2*15  =  120
f(3) -> f(2) + _  -> 60 + 2*15  =   90
f(2) -> f(1) + _   ->  30 + 2*15  =   60
f(1) -> f(0) + _   - > 0  + 2*15  =   30

*/

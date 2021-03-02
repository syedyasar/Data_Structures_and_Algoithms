/* 
	Purpose: 3_Static_Variables_in_recursion
	Date: 02-28-2021

 */

#include <iostream>

using namespace std;

int fun1(int n){
	
	static int x=5;
	
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

f(5) - > f(4) + _  -> 80 + 20 = 100
f(4) -> f(3) + _    -> 60 + 20 = 80
f(3)  - > f(2) + _  -> 40 + 20 = 60
f(2) -> f(1) + _   ->  20 + 20 = 40
f(1) -> f(0) + _   - > 0 + 20 =  20

*/

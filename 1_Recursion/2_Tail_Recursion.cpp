/* 
	Purpose: 2_Tail Recursion 
	Date: 02-28-2021

 */

#include <iostream>

using namespace std;

void fun1(int n){
	if(n>0){
		cout << n << endl;
		fun1(n-1);
		
	}
	
}

int main(int argc, char** argv) {
	
	int x=5;
	
	fun1(x);
	
	return 0;
}

/* 
Output:

5
4
3
2
1

*/

/* 
	Purpose: 1_Head Recursion 
	Date: 02-28-2021

 */


#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void fun1(int n){
	if(n>0){
		fun1(n-1);
		cout << n << endl;
		
	}
	
}

int main(int argc, char** argv) {
	
	int x=5;
	
	fun1(x);
	
	return 0;
}

/* 
Output:

1
2
3
4
5

*/

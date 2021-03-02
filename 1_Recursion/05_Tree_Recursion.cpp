/* 
	Purpose: 5_tree_recursion
	Date: 02-28-2021

 */

#include <iostream>

using namespace std;

void fun1(int n){
	if(n>0){
		cout << n << "  ";
		fun1(n-1);
		fun1(n-1);
	}
}

int main() {
	
	fun1(4);
	
	return 0;
}


/* 
Output:

fun1(3) - 3  2  1  1  2  1  1
fun1(4) - 4  3  2  1  1  2  1  1  3  2  1  1  2  1  1
fun1(5) - 5  4  3  2  1  1  2  1  1  3  2  1  1  2  1  1  4  3  2  1  1  2  1  1  3  2  1  1  2  1  1
fun1(6) - 6  5  4  3  2  1  1  2  1  1  3  2  1  1  2  1  1  4  3  2  1  1  2  1  1  3  2  1  1  2  1  1  5  4  3  2  1  1  2  1  1  3  2  1  1  2  1  1  4  3  2  1  1  2  1  1  3  2  1  1  2  1  1

*/

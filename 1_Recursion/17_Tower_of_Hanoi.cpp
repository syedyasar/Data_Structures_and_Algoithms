/* 
	Purpose: 17_Tower_of_Hanoi
	Date: 03-06-2021

 */

#include <iostream>

using namespace std;
int static c=0;
void tower_of_hanoi(int n,int A, int B, int C){
	
	if(n>0){
		tower_of_hanoi(n-1, A,C,B);
		cout << "("	<< A << "," << C << ")" << endl;
		c++;
		tower_of_hanoi(n-1, B,A,C); 
	}

	
}

int main()
{
	int n;
	cout << "Enter the value of n : "  << endl;
	cin >> n; 
	tower_of_hanoi(n,1,2,3);
	cout << c;
	return 0;
}


/* 
Input :1
Output :
(1,3)

Input : 2
Output :
(1,2)
(1,3)
(2,3)

*/

/* 
	Purpose: 3 2D Array
	Date: 03-06-2021

 */


#include <iostream>

using namespace std;



int main(int argc, char** argv) {
	int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
	int *B[3];
	int **C;
	int i,j;
	
	B[0]=new int[4];
	B[1]=new int[4];
	B[2]=new int[4];
	
	C=  new int*[3];

	C[0]=new int[4];
	C[1]=new int[4];
	C[2]=new int[4];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			cout << C[i][j] << "  ";
		cout << "\n";
	}	

	return 0;
}

/* 


*/

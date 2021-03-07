/* 
	Purpose: 1_Static_Dynamic_Array
	Date: 03-06-2021

 */


#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int A[5]={2,4,6,8,10};
	int *p;
	int i;
	//p=(int *)malloc(5*sizeof(int));
	p= new int[5] ;
	p[0]=3;
	p[1]=5;
	p[2]=7;
	p[3]=9;
	p[4]=11;
	cout << " Static Array  " << endl ;
	for(i=0;i<5;i++)
		cout << A[i] << "  " ;
	printf("\n");
	
	cout << " Dynamic Array  " << endl ;
	for(i=0;i<5;i++)
		cout << p[i] << "  " ;
		
	return 0;

}

/* 

*/

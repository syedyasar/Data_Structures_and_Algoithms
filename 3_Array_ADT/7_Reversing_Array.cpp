/* 
	Purpose:7 Reversing Array
	Date: 03-09-2021

 */


#include <iostream>

using namespace std;

class Array{
	private:
		int *A;
		int size;
		int length;
	
	public:
		Array(){
			size=10;
			length =0;
			A= new int[size];
		}
		Array(int size){
			this->size=size;
			length =0;
			A= new int[size];
		}
		~Array(){
			delete [] A ;
		}
		
		void Create();
		void Display();
		void Reverse();
		void Reverse_1();
		void swap(int *x,int *y);
		
		
};

void Array::Create(){
	cout << "Enter the number of Elements :" << flush ;
	cin >> length;
	cout << "Enter the Elements in array : " << "\n";
	for(int i=0;i<length;i++){
		cout << "Array element: " << i << " = " <<flush ;
		cin >> A[i] ;
	}
}

void Array::Display(){
	cout << "Elements in array are : \n" ;
	for(int i=0;i<length;i++){
		cout << A[i] << "  " ;
	cout << "\n";
	}
}

void Array::swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

void Array::Reverse_1(){
	int *B;
	int i,j;
	B= new int[length];
	
	for(i=0,j=length-1;i<=length-1;i++,j--){
		B[i]=A[j];
	}
	
	for(i=0;i<=length-1;i++){
		A[i]=B[i];
	}	
	
}

void Array::Reverse(){
	int i,j;
	for(i=0,j=length-1;i<j;i++,j--){
		swap( &A[i] , &A[j]);
	}
}


int main(int argc, char** argv) {
	
	Array A(10);
	A.Create();
	A.Display();
	A.Reverse();
	cout << "Reverse Array : \n" ;
	A.Display();
	
	return 0;
}

/* 
Console I/P O/P:
Enter the number of Elements :6
Enter the Elements in array :
Array element: 0 = 1
Array element: 1 = 2
Array element: 2 = 3
Array element: 3 = 4
Array element: 4 = 5
Array element: 5 = 6
Elements in array are :
1
2
3
4
5
6
Reverse Array :
Elements in array are :
6
5
4
3
2
1
*/

/* 
	Purpose: 11_Merge_Sorted_Array
	Date: 03-12-2021

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
		void Merge_Sorted_Array(Array &A, Array &B);
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



void Array::Merge_Sorted_Array(Array &A1, Array &B1){
	int i,j,k;
	i=j=k=0;
	
	while(i<A1.length && j<B1.length){
		if(A1.A[i]<B1.A[j])
			this->A[k++]=A1.A[i++];
		else
			this->A[k++]=B1.A[j++];
	}
	for(;i<A1.length;i++)
		this->A[k++]=A1.A[i];
	for(;j<B1.length;j++)
		this->A[k++]=B1.A[j];
	this->length=k;
}
	
int main(int argc, char** argv) {
	
	cout << "Array A : \n" ;
	Array A(10);
	A.Create();
	A.Display();
	
	cout << "Array B : \n" ;
	Array B(10);
	B.Create();
	B.Display();
	Array C(10);
	C.Merge_Sorted_Array(A,B);
	cout << "Array C [Merged Array A & B are Sorted ]: \n" ;
	C.Display();
	
	return 0;
}

/* 

Array A :
Enter the number of Elements :5
Enter the Elements in array :
Array element: 0 = 1
Array element: 1 = 3
Array element: 2 = 5
Array element: 3 = 7
Array element: 4 = 9
Elements in array are :
1
3
5
7
9
Array B :
Enter the number of Elements :5
Enter the Elements in array :
Array element: 0 = 2
Array element: 1 = 4
Array element: 2 = 6
Array element: 3 = 8
Array element: 4 = 10
Elements in array are :
2
4
6
8
10
Array C [Merged Array A & B are Sorted ]:
Elements in array are :
1
2
3
4
5
6
7
8
9
10

*/

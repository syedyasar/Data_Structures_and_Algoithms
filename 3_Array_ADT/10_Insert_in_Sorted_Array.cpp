/* 
	Purpose: 10_Insert_in_Sorted_Array
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
		void swap(int *x,int *y);
		bool Sorted_Check();
		void Insert_in_Sorted_Array(int x);
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

bool Array::Sorted_Check(){
	for(int i=0; i<length-1;i++){
		if(A[i]>A[i+1])
			return false;
	}
	return true;
}

void Array::Insert_in_Sorted_Array(int x){
	int i=length-1;
	if(length==size)
		return ;
	while(x<A[i] && i>0){
		A[i+1]=A[i];
		i--;
	}
	A[i+1]=x;
	length++;
	
}
	
int main(int argc, char** argv) {
	
	Array A(10);
	A.Create();
	A.Display();
	A.Insert_in_Sorted_Array(5);
	cout << "Array after Insertion into Sorted Array "  ;
	A.Display();
	
	return 0;
}

/* 

Case1:
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
Array after Insertion into Sorted Array Elements in array are :
1
3
5
5
7
9

Case2:
Enter the number of Elements :5
Enter the Elements in array :
Array element: 0 = 1
Array element: 1 = 6
Array element: 2 = 7
Array element: 3 = 8
Array element: 4 = 9
Elements in array are :
1
6
7
8
9
Array after Insertion into Sorted Array Elements in array are :
1
5
6
7
8
9

Case 3:
Enter the number of Elements :10
Enter the Elements in array :
Array element: 0 = 1
Array element: 1 = 2
Array element: 2 = 3
Array element: 3 = 4
Array element: 4 = 5
Array element: 5 = 6
Array element: 6 = 7
Array element: 7 = 8
Array element: 8 = 9
Array element: 9 = 10
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
Array after Insertion into Sorted Array Elements in array are :
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

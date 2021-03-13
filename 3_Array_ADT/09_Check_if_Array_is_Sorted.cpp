/* 
	Purpose: 9_Check_if_Array_is_Sorted
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
	
int main(int argc, char** argv) {
	
	Array A(10);
	A.Create();
	A.Display();
	cout << "Sorted Check result : " << ( A.Sorted_Check() ? "True": "False" )<< "\n" ;
	A.Display();
	
	return 0;
}

/* 

Case1:
Enter the number of Elements :5
Enter the Elements in array :
Array element: 0 = 1
Array element: 1 = 2
Array element: 2 = 3
Array element: 3 = 4
Array element: 4 = 5
Elements in array are :
1
2
3
4
5
Sorted Check result : True
Elements in array are :
1
2
3
4
5

Case2:
Enter the number of Elements :5
Enter the Elements in array :
Array element: 0 = -1
Array element: 1 = 2
Array element: 2 = -3
Array element: 3 = 4
Array element: 4 = 5
Elements in array are :
-1
2
-3
4
5
Sorted Check result : False
Elements in array are :
-1
2
-3
4
5


*/

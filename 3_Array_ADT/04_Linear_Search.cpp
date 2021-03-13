/* 
	Purpose: 4 Linear Search
	Date: 03-06-2021

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
		int LinearSearch(int key);
		void swap(int *x, int *y);
		
};
void Array::Create(){
	cout << " Enter the number of Elements :" << flush ;
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

int Array::LinearSearch(int key){
	for(int i=0; i<this->length ; i++ ){
		if(key==this->A[i]){
			this->swap(&this->A[i],&this->A[0]); //this->swap(&this->A[i],&this->A[i-1]);
			return i;
		}
			
	}
	return -1;
}

void Array::swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}


int main(int argc, char** argv) {
	int key,x;
	Array A(10);
	A.Create();
	A.Display();
	cout << "Enter the Element to be found : " ;
	cin >>  key;
	x=A.LinearSearch(key);
	x==-1? cout <<"\nElement not found" : cout <<"\nElement  found at index : " << x << "\n";
	A.Display();
	return 0;
}

/* 


*/

/* 
	Purpose: 3 Delete
	Date: 03-07-2021

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
		void Append(int a);
		void Insert(int x, int k);
		void Delete(int k);
		
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

void Array::Append(int a){
	if(this->length<size)
	this->A[this->length++]=  a ;
}

void Array::Insert(int x, int k){
	if(k>=0 && k<=this->length){
	for(int i=this->length;i>=k;i--){
		this->A[i+1] = this->A[i]; 
	}
	this->A[k] = x;
	this->length++;
	}
}

void Array::Delete(int k){
	int x=0;
	x=this->A[k];
	if(k>=0 && k<this->length){
	for(int i=k; i<this->length;i++){
		this->A[i] = this->A[i+1]; 
	}
	this->length--;
	}
}

int main(int argc, char** argv) {
	
	Array A(10);
	A.Create();
	A.Display();
	A.Insert(10,3);
	A.Display();
	A.Append(20);
	A.Display();
	A.Delete(3);
	A.Display();
	A.Delete(5);
	A.Display();
	A.Delete(4);
	A.Display();
	return 0;
}

/* 


*/

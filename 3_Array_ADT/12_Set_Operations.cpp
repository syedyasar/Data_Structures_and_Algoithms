/* 
	Purpose: 12 Set Operations
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
		void Union(Array A, Array B);
		void Intersection(Array A1, Array B1);
		void Difference(Array A1, Array B1);

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

void Array::Union(Array A1, Array B1){
	int i,j,k;
	i=j=k=0;
	
	while(i<A1.length && j<B1.length){
		if(A1.A[i]<B1.A[j])
			this->A[k++]=A1.A[i++];
		else if(A1.A[i]>B1.A[j])
			this->A[k++]=B1.A[j++];
		else {
			this->A[k++]=A1.A[i++];
			j++;	
		}
	}
	
	for(;i<A1.length;i++)
		this->A[k++]=A1.A[i];
	for(;j<B1.length;j++)
		this->A[k++]=B1.A[j];
	this->length=k;
}

void Array::Intersection(Array A1, Array B1){
	int i,j,k;
	i=j=k=0;
	
	while(i<A1.length && j<B1.length){
		if(A1.A[i]<B1.A[j])
			i++;
		else if(A1.A[i]>B1.A[j])
			j++;
		else {
			this->A[k++]=A1.A[i++];
			j++;	
		}
	}
	this->length=k;	
}

void Array::Difference(Array A1, Array B1){
	int i,j,k;
	i=j=k=0;
	
	while(i<A1.length && j<B1.length){
		if(A1.A[i]<B1.A[j])
			this->A[k++]=A1.A[i++];
		else if(A1.A[i]>B1.A[j])
			j++;
		else {
			i++;
			j++;	
		}
	}
	for(;i<A1.length;i++)
		this->A[k++]=A1.A[i];	
	this->length=k;	
}



	
int main(int argc, char** argv) {
	
	cout << "Array A : \n" ;
	Array A(10);
	A.Create();
//	A.Display();
	
	cout << "Array B : \n" ;
	Array B(10);
	B.Create();
//	B.Display();
/*
	Array C(10);
	C.Union(A,B);
	cout << "Array C [Union of  A & B ]: \n" ;
	C.Display();

	Array D(10);
	D.Intersection(A,B);
	cout << "Array D [Intersection of  A & B ]: \n" ;
	D.Display();
*/	
	Array E(10);
	E.Difference(A,B);
	cout << "Array E [Difference of  A & B ]: \n" ;
	E.Display();
	
	return 0;
}

/* 



*/

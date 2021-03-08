/* 
	Purpose: 4 Binary Search
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
		int BinarySearch(int key);
		int BinarySearch_Recursion(int key, int l, int h);
		
};
void Array::Create(){
	cout << " Enter the number of Elements :" << flush ;  //ex: 5
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


//Iterative method
int Array::BinarySearch(int key){
	int l, h,mid;
	l=0;
	h=this->length-1;
	while(l<=h){
		mid= (l+h)/2;
		if(key==this->A[mid])
			return mid;
		else if(key>this->A[mid])
			l=mid+1;
		else if(key<this->A[mid])
			h=mid-1;	
	}
	return -1;		

}

// BinarySearch using Recursion

int Array::BinarySearch_Recursion(int key, int l, int h){
	int mid=0;
	if(l<=h){
		mid= (l+h)/2;
		if(key==this->A[mid])
			return mid;
		else if(key>this->A[mid])
			return BinarySearch_Recursion(key,mid+1,h);
		else if(key<this->A[mid])
			return BinarySearch_Recursion(key,l,mid-1);	
	}
	return -1;		

}


int main(int argc, char** argv) {
	int key,x;
	Array A(10);
	A.Create();
	A.Display();
	cout << "Enter the Element to be found : " ;
	cin >>  key; 
	x=A.BinarySearch(key);
//	x=A.BinarySearch_Recursion(key,0,5);
	x==-1? cout <<"\nElement not found" : cout <<"\nElement  found at index : " << x << "\n";

	return 0;
}

/* 


*/

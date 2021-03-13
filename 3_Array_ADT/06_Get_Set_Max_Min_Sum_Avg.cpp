/* 
	Purpose: 6 Get Set Max Min Sum Avg
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
		int Get(int i);
		void Set(int i,int x);
		int Max();
		int Min();
		int Sum();
		float Avg();
		
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

int Array::Get(int i){
	if(i>=0 && i<this->length)
		return this->A[i] ;

	return -1;
}

void Array::Set(int i,int x){
	if( i>=0 && i< this->length )
		this->A[i] = x;
}

int Array::Max(){
	int max=this->A[0];
	for(int i=1; i<this->length ; i++){
		if(this->A[i]>max)
			max=this->A[i];
	}
	return max;
}

int Array::Min(){
	int min=this->A[0];
	for(int i=1; i<this->length ; i++){
		if(this->A[i]<min)
			min=this->A[i];
	}
	return min;
}

int Array::Sum(){
	int sum=0;
	for(int i=0; i<this->length ; i++){
		sum+=this->A[i];
	}
	return sum;
}

float Array::Avg(){
	if(this->length>0)
		return (float)(this->Sum())/this->length ;
	return -1;
}





int main(int argc, char** argv) {
	
	Array A(10);
	A.Create();
	A.Display();
	//Get Method
	cout << "\nUsing Get Method: \n";
	for(int i=0;i<5;i++){
		cout << A.Get(i) << "\n" ;
	}
	
	// Set Method
	cout << "\nUsing Set Method: \n";
	for(int i=0;i<5;i++){
		 A.Set(i,11+i);
	}	
	A.Display();
	
	// Max Method	
	cout << "\n\nMax: \n";
	cout << A.Max();
	
	// Min Method	
	cout << "\n\nMin: \n";
	cout << A.Min();
	
	// Sum
	cout << "\n\nSum: \n";
	cout << A.Sum();
	
	// Average	
	cout << "\n\nAverage: \n";
	cout << A.Avg();
	return 0;
	
	
	
	return 0;
}

/* 
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

Using Get Method:
1
2
3
4
5

Using Set Method:
Elements in array are :
11
12
13
14
15


Max:
15

Min:
11

Sum:
65

Average:
13

*/

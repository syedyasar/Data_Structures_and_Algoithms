/* 
	Purpose: 14_Array_C++_Class
	Date: 03-13-2021
 */


#include <iostream>

using namespace std;
template<class T>
class Array{
	private:
		T *A;
		int size;
		int length;
		void swap(T *x,T *y);
		
	public:
		Array(){
			size=10;
			length =0;
			A= new T[size];
		}
		Array(int size){
			this->size=size;
			length =0;
			A= new T[size];
		}
		~Array(){
			delete [] A ;
		}
		void Display();
		void Append(T x);
		void Insert(int index,T x);
		int Delete(int index);
		int LinearSearch(T key);
		int BinarySearch(T key);
		T Get(int index);
		void Set(int index,T x);
		T Max();
		T Min();
		T Sum();
		T Avg();
		void Reverse();
		void Reverse2();
		void InsertSort(T x);
		int isSorted();
		void Rearrange();
		Array<T>* Merge(Array<T> B);
		Array<T>* Union(Array B1);
		Array<T>* Difference(Array B1);
		Array<T>* Intersection(Array B1);


};

template<class T>
void Array<T>::Display(){
	cout << "Elements in array are : \n" ;
	for(int i=0;i<length;i++){
		cout << A[i] << "  " ;
	cout << "\n";
	}
}

template<class T>
void Array<T>::Append(T x){
	if(length<size)
	A[length++]=x;
}

template<class T>
void Array<T>::Insert(int index,T x){
	if(length<size && index>=0 && index<=length){
		for(int i=length;i>=index;i--){
		A[i]=A[i-1];
		}	
		A[index]=x;	
		length++;
	}
}

template<class T>
int Array<T>::Delete(int index){
	int x=0;
	if( index>=0 && index<length){
		x=A[index];
		for(int i=index;i<length-1;i++){
			A[i]=A[i+1];
		}		
		length--;
		return x;	
	}
		return 0;
}


template<class T>
void Array<T>::swap(T *x,T *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

template<class T>
int Array<T>::LinearSearch(T key){
	for(int i=0;i<length;i++){
		if(key==A[i])
//			swap(&A[i], &A[0]) ;
			return i;
}
	return -1;
}

template<class T>
int Array<T>::BinarySearch(T key){
	int l=0,h=length-1,m;
	while(l<=h){
		m=(l+h)/2;
		if(key==A[m])
			return m;
		else if(key<A[m])
			h=m-1;
		else
			l=m+1;		
	}
	return -1;
}

template<class T>
T Array<T>::Get(int index)
{
	if(index>=0 && index<length)
		return A[index];
	return -1;
}

template<class T>
void Array<T>::Set(int index,T x)
{
	if(index>=0 && index<length){
		A[index]=x;
	}
	
}

template<class T>
T Array<T>::Max()
{
	T max=A[0];
	for(int i=1;i<length;i++){
		if(A[i]> max)
			max=A[i];
	}
	return max;	
}

template<class T>
T Array<T>::Min()
{
	int min=A[0];
	for(int i=1;i<length;i++){
		if(A[i]< min)
			min=A[i];
	}
	return min;	
}

template<class T>
T Array<T>::Sum()
{
	int sum=0;
	for(int i=0;i<length;i++){
		sum+=A[i];
	}
	return sum;	
}

template<class T>
T Array<T>::Avg(){
	return (T)Sum()/length;
}

template<class T>
void Array<T>::Reverse(){
	int i,j;
	int *B;
	B=new T[length];
	for(i=0,j=length-1;i<=length;i++,j--){
		B[i]=A[j];
	}
	for(i=0;i<length;i++){
		A[i]= B[i];
	}	
}

template<class T>
void Array<T>::Reverse2(){
	int i,j;
	for(i=0,j=length-1;i<j;i++,j--){
		swap(&A[i],&A[j]) ;
	}
}

template<class T>
void Array<T>::InsertSort(T x)
{
	if(length==size)
		return;
		
	int i=length-1;
	while(i>=0 && A[i]>x){
		A[i+1]=A[i];
		i--;
	}
	A[i+1]=x;
	length++;
}

template<class T>
int Array<T>::isSorted(){
	for(int i=0;i<length-1;i++){
		if(A[i+1]<A[i])
			return 0;
	}
	return 1;
}

template<class T>
void  Array<T>:: Rearrange(){
	int i,j=0;
	for(i=0 ;i<length;i++){
		if(A[i] < 0 ){
			if(i!=j)
				swap(&A[i],&A[j]);
			j++;
		}
	}
}

template<class T>
Array<T>* Array<T>::Merge(Array<T> B){
	int i,j,k;
	i=j=k=0;
	
	Array *C=new Array[length +B.length];
	
	while(i<length && j<B.length){
		if(A[i]<B.A[j])
			C->A[k++]=A[i++];
		else
			C->A[k++]=B.A[j++];
	}
	for(;i<length;i++)
		C->A[k++]=A[i];
	for(;j<B.length;j++)
		C->A[k++]=B.A[j];
	C->length=k;
	
	return C;
}

template<class T>
Array<T>* Array<T>::Union(Array B1){
	int i,j,k;
	i=j=k=0;
	
	Array *C=new Array[length +B1.length];
	
	while(i<length && j<B1.length){
		if(A[i]<B1.A[j])
			C->A[k++]=A[i++];
		else if(A[i]>B1.A[j])
			C->A[k++]=B1.A[j++];
		else {
			C->A[k++]=A[i++];
			j++;	
		}
	}
	
	for(;i<length;i++)
		C->A[k++]=A[i];
	for(;j<B1.length;j++)
		C->A[k++]=B1.A[j];
	this->length=k;
	
	return C;
}

template<class T>
Array<T>* Array<T>::Intersection(Array B1){
	int i,j,k;
	i=j=k=0;
	Array *C=new Array[length +B1.length];	
	
	while(i<length && j<B1.length){
		if(A[i]<B1.A[j])
			i++;
		else if(A[i]>B1.A[j])
			j++;
		else {
			C->A[k++]=A[i++];
			j++;	
		}
	}
	C->length=k;	
	
	return C;
}

template<class T>
Array<T>* Array<T>::Difference(Array B1){
	int i,j,k;
	i=j=k=0;
	
	Array *C=new Array[length +B1.length];		
	
	while(i<length && j<B1.length){
		if(A[i]<B1.A[j])
			C->A[k++]=A[i++];
		else if(A[i]>B1.A[j])
			j++;
		else {
			i++;
			j++;	
		}
	}
	for(;i<length;i++)
		C->A[k++]=A[i];	
	C->length=k;	
	
	return C;
}


int main() {

	Array<float> *A;
	int ch,sz;
	int index;
	float x;
	cout<<"Enter Size of Array";
	cin >> sz;
	A=new Array<float>(sz);
	
	do
	{
	cout<<"\n\nMenu\n";
	cout<<"1. Insert\n";
	cout<<"2. Delete\n";
	cout<<"3. Search\n";
	cout<<"4. Sum\n";
	cout<<"5. Display\n";
	cout<<"6.Exit\n";
	cout<<"enter you choice ";
	cin>>ch;
	
	switch(ch)
	{
	case 1: cout<<"Enter an element and index ";
	cin>>x>>index;
	A->Insert(index,x);
	break;
	case 2: cout<<"Enter index ";
	cin>>index;
	x=A->Delete(index);
	cout<<"Deleted Element is"<<x;
	break;
	case 3:cout<<"Enter element to search";
	cin>>x;
	index=A->LinearSearch(x);
	cout<<"Element index "<<index;
	break;
	case 4:cout<<"Sum is "<<A->Sum();
	break;
	case 5:A->Display();
	}
	}while(ch<6);
	return 0;
}



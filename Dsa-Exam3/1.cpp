#include<iostream>
using namespace std;

int arr(int a[],int size)
{
	int j,total=0;
	
	cout<<endl<<"Enter The Elements :"<<endl;
	
	for(j=0;j<size;j++)
	{
		cout<<"Enter A["<<j<<"] : ";
		cin>>a[j];
		
		total += a[j];
	}
	
	return total;
}

int main()
{
	int size;
	
	cout<<"Enter The Size :";
	cin>>size;
	
	int a[size];
	
	int t = arr(a,size);
	
	cout<<endl<<"The Sum Of Array : "<<t;
	
	return 0;
}

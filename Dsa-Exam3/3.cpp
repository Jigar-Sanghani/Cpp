#include<iostream>
using namespace std;

class shape
{
	protected:
		double height;
		double width;
	
	public:
		shape()
		{
			cout<<"Enter Height : ";
			cin>>height;
			cout<<"Enter Width : ";
			cin>>width;
		}
};

class Triagle : public shape 
{
	public:
		void area()
		{
			cout<<"Area : "<<0.5*height*width<<endl;
		}
};

class Rectangle : public shape 
{
	public:
	void area()
	{
		cout<<"Area : "<<height*width<<endl;
	}
};

int main()
{
	cout<<"Triagle :"<<endl;
	Triagle tri;
	tri.area();
	
	cout<<endl<<"Rectangle :"<<endl;
	Rectangle s;
	s.area();
	
	return 0;
}

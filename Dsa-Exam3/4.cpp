#include<iostream>
using namespace std;

class Message
{
	private:
		string str = "Default";
		string str1 = "Default";
		
	public:
		Message(string s)
		{
			this->str=s;
		}
		
		void print()
		{
			cout<<endl<<endl<<"String Is : "<<this->str<<endl;
		}
		void print(string s)
		{
			string sum = this->str + s;
			cout<<endl<<endl<<"Addition Of String Is : "<<sum<<endl;
		}
};

int main()
{
	string str,str1;
	
	cout<<"Enter First Name : ";
	cin>>str;
	cout<<"Enter Second Name : ";
	cin>>str1;
	
	Message m(str);
	
	m.print();
	
	m.print(str1);
	return 0;
}

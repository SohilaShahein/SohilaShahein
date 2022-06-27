#include<iostream>
using namespace std;
int main()
{
	int age;
	cin>>age;
	while(age<0)
	{
		cout<<"error"<<"please enter age again"<<"\n";
		cin>>age;
	}
	cout<<age<<"\n";
}

#include<iostream>
#include<string>
using namespace std;
int main(){

char city;
cin>>city;


switch(city)
{
	case'm':
		cout<<"menofia"<<"\n";
		cout<<"Enter age "<<"\n";
		cin>>age;
		if(age<0)
		{
			goto label;
		}
		cout<<age<<"\n";
		break;
	case'c':
		cout<<"cairo"<<"\n";
		break;
	case'g':
		cout<<"garbiya"<<"\n";
		break;
		
}
label:
	cout<<"End of program"<<"\n";
}


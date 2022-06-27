#include<iostream>
using namespace std;
int main()
{
	int numday;
	float sum=0;
	float penny=1.0;
	cout<<"Enter number of days : ";
	cin>>numday;
	while(numday<1)
	{
		cout<<"Enter valid number of days";
		cin>>numday;
	}
	cout<<"Day "<<"\t"<<"salary"<<endl;
	for(int x=1;x<=numday;x++)
	{
		cout<<x<<"\t"<<penny/100<<" Dollar"<<endl;
		sum+=penny/100;

		penny*=2;
	}
	cout<<"TotalSalary= "<<sum<<endl;
}

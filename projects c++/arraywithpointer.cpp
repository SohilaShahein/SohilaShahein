#include<iostream>
using namespace std;
int main()
{
	int a[]={11,22,33,55};
	int *ptr=a;
	int sum=0;
	int s=sizeof(a)/sizeof(a[0]);
	for(int x=0;x<s;x++)
	{
	cout<<*ptr<<" ";
	sum+=*ptr;
	ptr++;
	
	}
	cout<<endl;
	cout<<"Sum = "<<sum<<endl;
}

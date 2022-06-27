#include<iostream>
using namespace std;
int main()
{
	unsigned int N;
	cin>>N;
	for(int x=1;x<=N;x++)
	{
		cout<<x<<" ";
	}
	cout<<endl;
		for(int y=N*2;y>=N+1;y--)
	{
		cout<<y<<" ";
	}
	cout<<endl;
	
	for(int z=(N*2)+1;z<=N*3;z++)
	{
		cout<<z<<" ";
	}
	cout<<endl;
		for(int a=N*4;a>=(N*3)+1;a--)
	{
		cout<<a<<" ";
	}
	cout<<endl;
		for(int b=(N*4)+1;b<=N*5;b++)
	{
		cout<<b<<" ";
	}
	cout<<endl;
}


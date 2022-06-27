#include<iostream>
using namespace std;
int main()
{
	unsigned int N;
	cin>>N;
	for(int x=1;x<=N;x++)
	{
		cout<<x<<"\n";
	}
	cout<<" ";
		for(int y=N*2;y>=N+1;y--)
	{
		cout<<y<<"\n";
	}
	cout<<" ";
	
	for(int z=(N*2)+1;z<=N*3;z++)
	{
		cout<<z<<"\n";
	}
	cout<<" ";
		for(int a=N*4;a>=(N*3)+1;a--)
	{
		cout<<a<<"\n";
	}
	cout<<endl;
		for(int b=(N*4)+1;b<=N*5;b++)
	{
		cout<<b<<"\n";
	}
	cout<<" ";
}


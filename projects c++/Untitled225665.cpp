#include<iostream>
using namespace std;
void sum(int n,int x)
{
	if(n==0)
	return ;
	else
	{
		cout<<x<<" ";
		sum(n-1,x+2);
		
	}
}
int main()
{
	int n;
	cin>>n;
	sum(n,2);
}

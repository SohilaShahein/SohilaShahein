#include<iostream>
using namespace std;
int sum=0;

	int display(int x)
	{
		for(int i=1;i<=x;i++)
		{
			if(x%2!=0)
		{
			cout<<x<<"\n";
		}
		else{
		
		sum+=x;
		}
	}
		return sum;
	}
	int main()
	{
		cout<<display(10)<<"\n";
	}
		
		


#include<iostream>
using namespace std;
int sum=0;

	int display(int x)
	{
		for(int i=1;i<=x;i++)
		{
			if(i%2!=0)
		{
			cout<<i<<"\n";
		}
		else{
		
		sum+=i;
		}
	}
		return sum;
	}
	int main()
	{
		cout<<display(10)<<"\n";
	}
		
		


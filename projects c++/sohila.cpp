#include<iostream>
using namespace std;
int main()
{
	int counter=0,a=0,b=0;
	unsigned int n;
	cin>>n;
	bool array[n][3];
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<3;y++)
		{
			cin>>array[x][y];
		}
	}for(int x=0;x<n;x++)
	{
		for(int y=0;y<3;y++)
		{
			if(array[0][y]==1)
			{
				counter++;
			}if(array[1][y]==1)
			{
				a++;
			}if(array[2][y]==1)
			{
				b++;
			}
		}
	
	}
	if(counter>=2&&(a>=2||b>=2)){
		cout<<"2"<<"\n";
	}
	else if(counter>=2&&(a>=2&&b>=2))
	{
		cout<<"3"<<"\n";
	}
	else if(counter>=2||(a>=2||b>=2))
	{
		cout<<"1"<<"\n";
	}
	else
	{
		cout<<"0"<<"\n";
	}
}
	


#include<iostream>
using namespace std;
int main()
{

	int counter=0;
	unsigned int n;
	cin>>n;

	bool array[n][3];
	int a[n];

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
			if(array[x][y]==1)
			{
				counter++;
			}
			
			
}
a[n]=counter;

counter=0;
}
int counter2=0;
for(int z=0;z<n;z++){
if(a[z]>=2)
{
	counter2++;
}
}

cout<<counter2<<"\n";
}

	


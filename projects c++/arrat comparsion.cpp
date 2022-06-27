#include<iostream>
using namespace std;

int main()
{		 int counter=0;

    int z;
	int n;
	cin>>n;
	int array1[n];
	int array2[n];
		int array3[counter];
for(int x=0;x<n;x++)
{
	cin>>array1[x];
}

for(int y=0;y<n;y++)
{
	cin>>array2[y];
}
for(int x=0;x<n;x++)
{
	for(int y=0;y<n;y++)
	{
	   if(array1[x]==array2[y])	
	   {
	   	counter++;
	   	array3[counter]=array1[x];
	   }
	}
}
for(int i=0;i<counter;i++)
{
	cout<<array3[i]<<" "<<"\n";
}
cout<<counter*100/n<<" "<<"%"<<"\n";


}



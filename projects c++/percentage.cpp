#include<iostream>
using namespace std;

int main()
{		 int counter=0;

    int z;
	int n;
	cin>>n;
	int array1[n];
	int array2[n];
		int array3[n];
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
	   	array3[n]=array1[x];
	   }
	}
}
	cout<<"common elements ";

for(int i=0;i<n;i++)
{
	cout<<array3[i]<<" ";
}
cout<<"percentage of matching "<<counter*100/n<<" "<<"%"<<"\n";


}



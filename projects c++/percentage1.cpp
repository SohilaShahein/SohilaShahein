#include<iostream>
using namespace std;

int main()
{		 int counter=0;

	int n;
	cin>>n;
	int array1[n];
	int array2[n];
for(int x=0;x<n;x++)
{
	cin>>array1[x];
}

for(int y=0;y<n;y++)
{
	cin>>array2[y];
}
	cout<<"common elements ";

for(int x=0;x<n;x++)
{
	for(int y=0;y<n;y++)
	{
	   if(array1[x]==array2[y])	
	   {
	   	counter++;
	   	cout<<array1[x]<<" ";
	   }
	}
}
cout<<endl;
	
cout<<"percentage of matching "<<counter*100/n<<" "<<"%"<<"\n";


}



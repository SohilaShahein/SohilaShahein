#include<iostream>
using namespace std;

int main()
{		 int counter=0;

    int z;
	int n;
	cin>>n;
	int array1[n];
	int array2[n];
		int array3[z];

	for(int x=0;x<n;x++)
	{
			for(int y=0;y<n;y++){
			

		cin>>array1[x];
				cin>>array2[y];
			}

	}

	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(array1[x]==array2[y])
			{
				++counter;
				array3[z]=array1[x];
			}
		}
						z=counter++;

	}

	
	cout<<"percentage of matching "<<(z-1)*100/n<<"%"<<"\n";
}

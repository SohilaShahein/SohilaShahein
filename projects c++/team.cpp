#include<iostream>
#include<string>
using namespace std;

int main()
{
	int counter=0;
	bool a,b,c;
	unsigned int n;
	cin>>n;
	for(int x=0;x<n;x++)
	{
		cin>>a>>b>>c;
	}	for(int x=0;x<n;x++)
	{
				cin>>a>>b>>c;
				
				for(int x=0;x<n;x++)
	{
				cin>>a>>b>>c;
				if(a==1){
					counter ++;
				}if(b==1){
					counter ++;
				}
				if(c==1){
					counter ++;
				}
				
				

	

	}
	if(counter>=2)
	{
		cout<<counter<<"\n";
	}
}
}

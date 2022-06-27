#include<iostream>
using namespace std;
int main()
{
	long long int A,B,C;
	cin>>A>>B>>C;
	if(A>B&&B>C)
	  cout<<C<<" "<<A<<"\n";
	else if(C>B&&B>A)
	  cout<<A<<" "<<C<<"\n";
	else if(C<B&&C<A)
	  cout<<C<<" "<<B<<"\n";
	else
	  cout<<A<<" "<<B<<"\n";
}


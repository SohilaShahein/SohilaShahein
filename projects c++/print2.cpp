#include<iostream>
using namespace std;
void print(int p)
{
	if(p==0)
	return ;
	else
	cout<<p;
	print(p-1);
}
int main(){

print(5);
}

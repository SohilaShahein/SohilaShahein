#include<iostream>
using namespace std;
void showage(int age)
{
	if(age<0){
	
	cin>>age;
	showage(age);
}
}
int main()
{
showage(-58);
}

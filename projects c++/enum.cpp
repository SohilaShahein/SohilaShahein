#include<iostream>
using namespace std;
enum days_of_week{sat,sun,mon,tus,thur
};
int main(){

days_of_week day1,day2;
day1=tus;
day2=mon;

int diff=day2-day1;
cout<<diff<<endl;
if(day2<day1)
{
	cout<<day2<<" comes before "<<day1<<endl;
}
else
{
cout<<day1<<" comes before "<<day2<<endl;	
}

}


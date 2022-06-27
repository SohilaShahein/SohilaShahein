#include<iostream>
#include<string>
using namespace std;
class restaurant{
	private:
		string rest_name;
		string food_name;
		float food_price;
	public:
		restaurant()
		{
			cout<<"Enter rest_name: ";
			cin>>rest_name;
			cout<<"Enter food_name : ";
			cin>>food_name;
			cout<<"Enter food_price : ";
			cin>>food_price;
		}
		float discount()
		{
			food_price=food_price-.05*food_price;
			return food_price;
		}
		
};
int main()
{
	restaurant *r1,*r2,*r3;
	r1=new restaurant();
	r2=new restaurant();
	r3=new restaurant();
	cout<<r1->discount()<<endl;
	delete r1;
	delete r2;
	delete r3;

	
	


}

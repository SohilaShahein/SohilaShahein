#include<iostream>
#include<string>
using namespace std;
class supermarket{
	private:
		string MarketName;
		string MarketAddress;
	public:
		void print()
		{
			cout<<MarketName<<"\n"<<MarketAddress<<endl;
		}
		supermarket()
		{
			cout<<"Enter mark_name : ";
			cin>>MarketName;
			cout<<"Enter Address : ";
			cin>>MarketAddress;
		}
		
};
class product{
	public:
		string productName;
		float price;
	public:
		void print()
		{
			cout<<productName<<"\n"<<price<<endl;
		}
		
		product()
		{
			cout<<"Enter prod_name : ";
			cin>>productName;
			cout<<"Enter price : ";
			cin>>price;
			
		}
};
class client:public supermarket,product
{
	private:
		string clientName;
		float Money;
	public:
		client()
		{
			cout<<"Enter cli_Name : ";
			cin>>clientName;
			cout<<"Enter Money : ";
			cin>>Money;
			
		}
		void print()
		{
			supermarket::print();
			product::print();
			cout<<clientName<<"\n"<<Money<<endl;
		}
		
		float remaining()
		{
			float remaing_money=Money-price;
			return remaing_money;
		}
		void operator +(client c2)
		{
			float Total_spending=price+c2.price;
			float Total_remaining=remaining()+c2.remaining();
			cout<<Total_spending<<"\t"<<Total_remaining<<endl;
			
		}
		
};
int main()
{
	client c1,c2;
	c1.operator +(c2);
}

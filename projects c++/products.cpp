#include<iostream>
using namespace std;
class Product{
	private:
	int price;
	int id;

	public:
		void setData()
		{
			cout<<"Enter price: ";
			cin>>price;
			cout<<"Enter id: ";
			cin>>id;
		}
		int getPrice()
		{
			return price;
		}
		int getId()
		{
			return id;
		}
	
	
};



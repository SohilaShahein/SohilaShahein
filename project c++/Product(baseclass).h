#ifndef PRODUCT
#define PRODUCT

#include<iostream>
using namespace std;
class Product{
	int id,price;
	public:
		Product()
		{
			cout<<"Enter id: ";
			cin>>id;
			cout<<"Enter price: ";
			cin>>price;
		}
		int getPrice()
		{
			return price;
		}
			int getId()
		{
			return id;
		}
		void displayProduct(){
			cout<<"id: "<<id<<"\t"<<"price: "<<price<<"\t";
		}
};
#endif

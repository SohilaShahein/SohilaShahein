#include<iostream>
using namespace std;
#include"Product(baseclass).h"
class Milk : public Product
{
	private:
	int temp;
	
	public: 

	Milk(){
		cout<<"Enter temperature: ";
		cin>>temp;
		
		
	}
	int getTemp()
	{
		return temp;
	}
	void displayMilk()
	{
		Product::displayProduct();
		cout<<"temperature: "<<temp<<"\n";
	}
	
		
		
		
	
		
	
	
};




#include<iostream>
using namespace std;
#include"Product(baseclass).h"

class meat : public Product{
	private:
	
	int temp;
	float weight;
	

	public:
		meat(){
			cout<<"Enter temperature: ";
			cin>>temp;
			cout<<"Enter weight: ";
			cin>>weight;
			
			
		}
			
		
		
		
		
		int getTemp(){
			return temp;
		}
		
		float getWeight()
		{
			return weight;
		} 
		void displayMeat(){
			Product::displayProduct();
			cout<<"temperature: "<<temp<<"\t"<<"weight: "<<weight<<"\n";
		}
	
	
};





#include<iostream>
#include<string>
#include"Product(baseclass).h"
using namespace std;

class biscuits:public Product{
	private:

		string type;
		static int count;
		public :
		
			void setType(string type)
			{
				this->type=type;
			}
			
			biscuits(){
		
				cout<<"Enter type: ";
				cin>>type;
				count++;
			
				setType(type);
			}
			
		
			
				
			
				int getCount() const{
				return count;
			}
			string gettype() const{
				return type;
			}
		
			void displayBiscuit() {
				Product::displayProduct();
				cout<<"type: "<<type<<"\t"<<"number of biscuits : "<<count<<"\n";
			}
			
			
};
int biscuits::count=0;

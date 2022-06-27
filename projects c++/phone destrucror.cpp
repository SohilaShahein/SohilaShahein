#include<iostream>
#include<string>
using namespace std;
class phone{
	private:
		string name;
		string model;
		int price;
	public:
		phone(string n,string m,int p)
		{
			name=n;
			model=m;
			price=p;
		}
		void print();
		~phone();
		
		
};
void phone:: print()
		{
			cout<<name<<" "<<model<<" "<<price<<endl;
		}
phone::~phone(){
	cout<<"deleted "<<endl;
}
int main()
{
	phone p1("huawi","mate 9",12345);
	p1.print();
}

#include<iostream>
using namespace std;
class circle{
	public:
		int x;
	   float p;
		float area;
	public:
		void setx()
		{
			cout<<"Enter x for This circle : ";
			cin>>x;
		}
		int getx()
		{
			return x;
		}
		
		void setarea()
		{
			area=x*x*p;
			//return area;
	
		}
		float getarea()
		{
		return area;
	
		}
		float operator *(circle c2)
		{
			area=area*c2.area;
			return area;
			
		}
		circle()
		{
			cout<<"Enter p : ";
			cin>>p;
		}
		
};
int main()
{
	circle c1,c2;
	c1.setx();
		c2.setx();

	
	c1.setarea();
	c2.setarea();
	cout<<c1.getarea()<<endl;    //x*x*p
	 cout<<c1.operator *(c2)<<endl;     //c1=c1*c2
	 cout<<c1.getarea()<<endl;      //new c1
	
}

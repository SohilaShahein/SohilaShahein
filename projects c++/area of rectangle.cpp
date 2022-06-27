#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length,width;
	public:
		void setData()
		{
			cout<<"Enter length : ";
			cin>>length;
			cout<<"Enter width : ";
			cin>>width;
		}
		int getArea()
		{
			int area=length*width;
			return area;
		}
};
int main()
{
	Rectangle R1,R2;
	R1.setData();
	R2.setData();
	if(R1.getArea()>R2.getArea())
	
		cout<<"Area of first Rectangle greater than Area of second Rectangle "<<endl;
	else if(R1.getArea()<R2.getArea())
	cout<<"Area of first Rectangle smaller than Area of second Rectangle "<<endl;
	else
	cout<<"Area of first rectangle Equals to Area of second rectangle "<<endl;

}

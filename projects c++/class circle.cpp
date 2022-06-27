#include<iostream>
using namespace std;
class circle{
	private:
		int r;
		static float pi;
	public:
		circle()
		{
			cout<<"Enter circle radius : ";
			cin>>r;
		}
		float area()
		{
			return r*r*pi;
		}
		float operator *(circle c2)
		{
			float m=area() * c2.area();
			return m;
		}
		
};
float circle::pi=3.14;
int main()
{
	circle c1,c2;
	//float mult=c1*c2;
	cout<<"The result of multiplication is "<<c1.operator *(c2)<<endl;
}

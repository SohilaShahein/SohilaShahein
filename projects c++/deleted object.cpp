#include<iostream>
using namespace std;
class Rectangle{
	private:
		int H,W;
	public:
		Rectangle():W(0),H(0)
		{
		}
		Rectangle(int a,int b):W(a),H(b)
		{
			cout<<" Rectangle has been created "<<endl;
			
		}
		~Rectangle()
		{
			cout<<W<<" "<<H<<" Rectangle has been deleted "<<endl;
		}
};
int main()
{
	Rectangle R1(3,4),R2(5,6);
	Rectangle R3;
	/*			cout<<"Rectangle has been created "<<endl;
	cout<<"Rectangle has been created "<<endl;
	0,0Rectangle has been deleted
	5,6Rectangle has been deleted
	3,4Rectangle has been deleted*/

	
}

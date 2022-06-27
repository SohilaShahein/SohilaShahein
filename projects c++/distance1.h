#include<iostream>
using namespace std;
class Distance
{
	public:
		int feet;
		float inches;
	public:
	
		Distance(int f,float i):feet(f),inches(i)
		{
			
		}
		Distance operator +(Distance d2)
		{
			feet=feet+d2.feet;
			inches=inches+d2.inches;
			return Distance(feet,inches);
		}
		void display()
		{
			cout<<feet<<endl;
			cout<<inches<<endl;
			}	
};

#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
	public:
		void setDistance(int f,float i)
		{
			feet=f;
			inches=i;
		}
		void print()
		{
			cout<<"feet of This Distance is "<<feet<<"\n";
			cout<<"inches of This Distance is "<<inches<<"\n";
		}
		Distance():feet(0),inches(0.0)
		{
			
		}
		Distance(int f,float i):feet(f),inches(i)
		{
			
		}
};


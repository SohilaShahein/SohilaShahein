#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
	public:
		void setdistance(int f,float i)
		{
			feet=f;
			inches=i;
		}
		void getdistance()
		{
			cout<<"The Feet of This distance is "<<feet<<endl;
						cout<<"The inches of This distance is "<<inches<<endl;

		}
		Distance add_dist(Distance,Distance);
		
		

		
};

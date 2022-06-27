#include<iostream>
#include<string>
using namespace std;
int size;
class car{
	private:
		string type;
		string color;
		int speed;
	public:
		void setType(string t)
		{
			type=t;
		}
		void setColor(string c)
		{
			color=c;
		}
		void setSpeed(int s)
		{
			speed=s;
		}
		string getType()
		{
			return type;
		}
		int getSpeed()
		{
			return speed;
		}
		string getColor()
		{
			return color;
		}
		void setData()
		{
			cout<<"Enter type";
			cin>>type;
			cout<<"Enter color";
			cin>>color;
			cout<<"Enter speed";
			cin>>speed;
				 
	
		}
		void showData()
		{
			cout<<type<<" "<<color<<" "<<speed<<endl;
		}
		
};

car getmaxSpeed(car c1[],int size)
{
				int max=c1[0].getSpeed();
				int index=0;

	
	
	
		for(int x=0;x<size;x++){
			if(max<c1[x].getSpeed())
			{
				max=c1[x].getSpeed();
				 index=x;
			}
			
			
			
		}
		return c1[index];

}
int main()
{
	car c1[2];
	for(int x=0;x<2;x++)
	{
		c1[x].setData();
	}
	car c2=getmaxSpeed(c1,2);
	c2.showData();
}


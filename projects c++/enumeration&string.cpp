#include<iostream>
#include<string>
using namespace std;
enum days{sat=1,sun,mon
};
string da[3]={"sat","sun","mon"};
class Week{
	days d[3];
	public:
		void setWeek(days w[])
		{
			for(int x=0;x<3;x++)
			{
				d[x]=w[x];
			}
		}
		void p()
		{
			for(int x=0;x<3;x++)
			{
				cout<<"The number of day  "<<da[x]<<" = "<<d[x]<<endl;
			}
		}
};
int main()
{
	days d[3]={sat,sun,mon};
	Week g;
	g.setWeek(d);
	g.p();
}

#include<iostream>
using namespace std;
enum months{jan=90,feb,may,mar=56
};
int main()
{
	months mon[4]={jan,feb,may,mar};
	string mon_str[4]={"jan","feb","may","mar"};

	
	for(int x=0;x<4;x++)
	{

		cout<<mon[x]<<" "<<mon_str[x]<<endl;
	}
}


#include<iostream>
using namespace std;
class Date{
	private:
		int day;
		int month;
		int year;
	public:
		void setDate()
		{
			cout<<"Enter day: ";
			cin>>day;
			while(day>31||day<1)
			{
				cout<<"please Enter valid days ";
				cin>>day;
			}
			cout<<"Enter month: ";
			cin>>month;
			while(month>12||month<1)
			{
				cout<<"please Enter valid months ";
				cin>>month;
			}
			cout<<"Enter year: ";
			cin>>year;
			while(year<1)
			{
				cout<<"please Enter valid years ";
				cin>>year;
			}
		}
		int getYear()
		{
			return year;
		}
		int getMonth()
		{
			return month;
		}
		int getDay()
		{
			return day;
		}
		void showDate()
		{
			cout<<month<<"/"<<day<<"/"<<year<<endl;
		}
};
int main()
{
	Date d1;
	d1.setDate();
	d1.getDay();
	d1.getMonth();
	d1.getYear();
	d1.showDate();
}

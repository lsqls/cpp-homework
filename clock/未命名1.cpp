#include <iostream>
using namespace std;
class Clock
{
private:
int year;
int month;
int day;
public:
void set(int _year,int _month,int _day);
void show(int a);
void show(double a);
};
int main()
{
Clock cl;
int year,month,day;
char arr[10];
int a=100;
cin>>year>>month>>day>>arr;
for(int i=0;i<10;++i)
{
	if(arr[i]=='.')
	{
	double a=0.1;
	break;
    }
}
cl.set(year,month,day);
cl.show(a);
return 0;	
 } 
void Clock::set(int _year,int _month,int _day)
{
	year=_year;
	month=_month;
	day=_day;
}
void Clock::show(double a)
{
	cout<<year<<"��"<<month<<"��"<<day<<"��"; 
}
void Clock::show(int a)
{
	cout<<year<<'-'<<month<<'-'<<day;
}
//2017 5 30 1.1

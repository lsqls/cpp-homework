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
bool al=true;
cin>>year>>month>>day>>arr;
for(int i=0;i<10;++i)
{
	if(arr[i]=='.')
	{
	al=false;
	break;
    }
}
cl.set(year,month,day);
if(al==true)
cl.show(1);
else
cl.show(1.0);
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
	cout<<year<<"Äê"<<month<<"ÔÂ"<<day<<"ÈÕ"; 
}
void Clock::show(int a)
{
	cout<<year<<'-'<<month<<'-'<<day;
}
//2017 5 30 1.1

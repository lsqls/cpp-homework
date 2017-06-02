#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
	int id;
	string name;
	long money;
	int year;
	int month;
	int day;
public:
	Employee(int _id,string name,long _money,int _year,int _month,int _day);
	long get_money();
	int get_year();
	int get_month();
	string get_name();
};
int main()
{	void show(int id,Employee*,int year,int month);
	Employee arr[5]={
					Employee(1,"wang",5000,2000,10,23),
					Employee(2,"liu",4500,2008,1,20) ,
					Employee(3,"huo",3800,2003,7,3),
					Employee(4,"ma",5300,2015,4,10),
					Employee(5,"meng",6000,2016,3,16)
					};
	int id,year,month;
	cin>>id>>year>>month; 
	show(id,arr,year,month);
	return 0;
}
/*
1,"wang",5000,2000,10,23
2,"liu",4500,2008,1,20
3,"huo",3800,2003,7,3
4,"ma",5300,2015,4,10
5,"meng",6000,2016,3,16
ÊäÈë£º5 2016 5
Êä³ö£ºmeng 12000
*/ 
Employee::Employee(int _id,string _name,long _money,int _year,int _month,int _day)
{
	id=_id;
	name=_name;
	money=_money;
	year=_year;
	month=_month;
	day=_day; 
}
long Employee::get_money()
{
	return money;
}
int Employee::get_year()
{
	return year;
}
int Employee::get_month()
{
	
	return month;
}
string Employee::get_name()
{
	return name;
}
void show(int id,Employee* arr,int year,int month)
{	id=id-1;
    long money;
    string name;
    int _year,_month;
    money=(arr+id)->get_money();
    _year=(arr+id)->get_year();
    _month=(arr+id)->get_month();
    if(month-_month>=0)
    money=money*((year-_year)*12+month-_month);
    if(month-_month<0)
    money=money*((year-_year-1)*12+month+12-_month);
    name=(arr+id)->get_name();
    cout<<name<<' '<<money;
    
}



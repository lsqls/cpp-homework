#include <iostream>
using namespace std;
class Rectangle
{
	private:
		double length;
		double width;
		double s;
	public:
		 Rectangle(double l,double w);	
		 double get_s();	 
		 Rectangle();	
}; 
int main()
{	Rectangle& max(Rectangle& a,Rectangle& b,Rectangle& c);
	Rectangle a(5.2,4.3),b(100,20);
	double h,w;
	cin>>h>>w;
	Rectangle c(h,w);
	cout<<max(a,b,c).get_s();
	return 0;
}
Rectangle::Rectangle(double l,double w)
{
length=l;
width=w;
s=length*width;	
}
double Rectangle::get_s()
{
	return s;
}
Rectangle& max(Rectangle& a,Rectangle& b,Rectangle& c)
{
	if(a.get_s()>b.get_s()&&a.get_s()>c.get_s())
		return a;
	if(a.get_s()<b.get_s()&&b.get_s()>c.get_s()) 
		return b;
	else 
		return c;
}


	

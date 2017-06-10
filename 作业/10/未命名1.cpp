#include <iostream>
#include <cmath>
using namespace std;
class CPoint
{
	protected:
		double x,y;
	public:
		CPoint(double _x,double _y);
		double distance(const CPoint&);
};
class CRectangle:public CPoint
{
	private:
		double length,width;
	public:
		CRectangle(double _length,double _width,double _x,double _y);
		double s();
		double l(); 
};
CPoint::CPoint(double _x,double _y)
{
	x=_x;
	y=_y;
}
double CPoint::distance(const CPoint& p2)
{
	double dis;
	dis=(this->x-p2.x)*(this->x-p2.x)+(this->y-p2.y)*(this->y-p2.y);
	dis=sqrt(dis);
	return dis;
}
CRectangle::CRectangle(double _length,double _width,double _x,double _y):CPoint(_x,_y)
{
	length=_length;
	width=_width;
}
double CRectangle::s()
{
	return x*y;
}
double CRectangle::l()
{
	return 2*(x+y);
}
int main()
{
	CRectangle rec(1,2,10,20);
	cout<<rec.l()<<' ';
	cout<<rec.s()<<' ';
	CPoint p1(0,0),p2(3,4);
	cout<<p1.distance(p2);
} 

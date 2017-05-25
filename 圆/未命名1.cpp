#include <iostream>
using namespace std;

class Circle
{
	private:
		double r;
		double s;
		double l;
		const static double pi=3.14;
	public:
		void set(double _r);
		void show();
}; 
int main()
{
Circle cir;
double r;
cin>>r;
cir.set(r);
cir.show();
return 0;
}
void Circle::set(double _r)
{
	s=pi*_r*_r;
	l=2*pi*_r;
}
void Circle::show()
{
	cout<<"周长"<<l<<' '<<"面积"<<s;
}


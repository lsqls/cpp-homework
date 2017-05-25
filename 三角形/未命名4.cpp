#include <iostream>
using namespace std;
class Triangle
{
	private:
		double a;
		double b;
		double c;
	public:
		Triangle(double _a,double _b,double _c);
		void get_data(double& m,double& n,double& p);
};
int main()
{	void shape(Triangle& tri);
	double a,b,c;
	cin>>a>>b>>c;
	Triangle triangle(a,b,c);
	shape(triangle);
	return 0;
}
Triangle::Triangle(double _a,double _b,double _c)
{
	a=_a;
	b=_b;
	c=_c;
}
void Triangle::get_data(double& m,double& n,double& p)
{
m=a;
n=b;
p=c;
}
void shape(Triangle& tri) 
{
bool right_angle(double m,double n,double p);
bool angle(double m,double n,double p);
	double m,n,p;
    	tri.get_data(m,n,p);
    	bool br=true;
    	if(m==n&&n==p)
        	{cout<<"A equileteral triangle";br=false;}
        if((m==n||n==p)&&br)
        	{cout<<"A isosceles triangle";br=false;}
        if(right_angle(m,n,p)&&br)
        	{	cout<<"A right triangle";br=false;}
        if(angle(n,n,p)&&br)
        	{	cout<<"A triangle";br=false;}
        if(br)
        {	cout<<"Not a triangle";}
		 	
}
bool right_angle(double m,double n,double p)
{	bool ok=false;
	if(m*m==(n*n+p*p))
		ok=true;
	if(n*n==(p*p+m*m))
		ok=true;
	if(p*p==(n*n+m*m))
		ok=true;
	return ok;
}
bool angle(double m,double n,double p)
{
	bool ok=false;
	if((m<(n+p))&&(n<(p+m))&&(p<(n+m)))
		ok=true;
	else 
		ok=false;
	return ok;
}


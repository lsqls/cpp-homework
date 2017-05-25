#include <iostream>
using namespace std;
class Triangle
{
	private:
		int a;
		int b;
		int c;
	public:
		Triangle(int _a,int _b,int _c);
		void get_data(int& m,int& n,int& p);
};
int main()
{	void shape(Triangle& tri);
	int a,b,c;
	cin>>a>>b>>c;
	Triangle triangle(a,b,c);
	shape(triangle);
	return 0;
}
Triangle::Triangle(int _a,int _b,int _c)
{
	a=_a;
	b=_b;
	c=_c;
}
void Triangle::get_data(int& m,int& n,int& p)
{
m=a;
n=b;
p=c;
}
void shape(Triangle& tri) 
{
bool right_angle(int m,int n,int p);
bool angle(int m,int n,int p);
	int m,n,p;
    	tri.get_data(m,n,p);
    	bool br=true;
		if(!angle(m,n,p)||m<0||p<0||n<0)
        {	cout<<"Not a triangle";br=false;}
    	if(m==n&&n==p&&br)
        	{cout<<"A equileteral triangle";br=false;}
        if((m==n||n==p||p==m)&&br)
        	{cout<<"A isosceles triangle";br=false;}
        if(right_angle(m,n,p)&&br)
        	{	cout<<"A right triangle";br=false;}
        if(angle(m,n,p)&&br)
        	{	cout<<"A triangle";br=false;} 	
}
bool right_angle(int m,int n,int p)
{	bool ok=false;
	if(m*m==(n*n+p*p))
		ok=true;
	if(n*n==(p*p+m*m))
		ok=true;
	if(p*p==(n*n+m*m))
		ok=true;
	return ok;
}
bool angle(int m,int n,int p)
{
	bool ok=false;
	if((m<(n+p))&&(n<(p+m))&&(p<(n+m)))
		ok=true;
	else 
		ok=false;
	return ok;
}


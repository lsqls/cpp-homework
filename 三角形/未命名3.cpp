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
		void get_data(double* triangle); 
};
int main()
{	char* shape(Triangle& tri);
	double a,b,c;
	cin>>a>>b>>c;
	Triangle triangle(a,b,c);
	cout<<shape(triangle);
	return 0;
	
}
Triangle::Triangle(double _a,double _b,double _c)
{
	a=_a;
	b=_b;
	c=_c;
}
void Triangle::get_data(double* triangle)
{
	triangle[0]=a;
	triangle[1]=b;
	triangle[2]=c;
}	

char* shape(Triangle& tri) 
{	bool right_angle(double arr[]);
	bool angle(double arr[]);
    	double* arr;
    	char* _shape=new char[100];
    	tri.get_data(arr);
    	if(arr[0]==arr[1]&&arr[1]==arr[2])
        	_shape=(char*)"A equileteral triangle";
        if(arr[0]==arr[1]||arr[1]==arr[2])
        	_shape=(char*)"A isosceles triangle";
        if(right_angle(arr))
        	_shape=(char*)"A right triangle";
        if(angle(arr))
        	_shape=(char*)"A triangle";
        else
        	_shape=(char*)"Not a triangle";
        return _shape;
		 	
}
bool right_angle(double arr[])
{	bool ok=false;
	if(arr[0]*arr[0]==(arr[1]*arr[1]+arr[2]*arr[2]))
		ok=true;
	if(arr[1]*arr[1]==(arr[2]*arr[2]+arr[0]*arr[0]))
		ok=true;
	if(arr[2]*arr[2]==(arr[1]*arr[1]+arr[0]*arr[0]))
		ok=true;
	return ok;
}
bool angle(double arr[])
{
	bool ok=false;
	if(arr[0]<(arr[1]+arr[2]))
		ok=true;
	if(arr[1]<(arr[2]+arr[0]))
		ok=true;
	if(arr[2]<(arr[1]+arr[0]))
		ok=true; 
	return ok;
}


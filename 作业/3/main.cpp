#include <iostream>
#include <cmath> 
#include "fun.h"
using namespace std;
int main() 
{
	double a,b,c;
	cin>>a>>b>>c;
	double s=s(a,b,c);
	double area=area(a,b,c,s);
	cout<<area;
	return 0;
}

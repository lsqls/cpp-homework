#include <iostream>
using namespace std;
int main()
{
	int* p;
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&a>c)
	p=&a;
	if(b>a&&b>c)
	p=&b;
	if(c>=b&&c>=a)
	p=&c;
	cout<<*p;
	return 0;
 } 

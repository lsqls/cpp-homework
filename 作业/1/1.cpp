#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<" Please a number (>=0);";
	double x;
	cin>>x;
	cout<<"Please select a function: "<<endl<<"1 sqrt(x)"<<endl<<"2 ln(x)"<<endl<<"3 sin(x)"<<endl<<"4 exit"<<endl;
	int f;
	cin>>f;
	switch(f)
		{
		case 1:
			cout<<sqrt(x);
			break;
		case 2:
			cout<<log(x);
			break;
		case 3:
			cout<<sin(x);
			break;
		case 4:
			break;
		}	
	return 0;
 } 
 

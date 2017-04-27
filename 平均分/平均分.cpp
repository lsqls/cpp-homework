#include <iostream>
#include <algorithm> 
int main()
{
using namespace std;
void qsort(double a[],int low,int high);
	double s[10];
	double sum=0;
	int stage;
	for(int i=0;i<10;i++)
	cin>>s[i];
	cin>>stage;
	sort(s,s+10);
	if(stage==2)
	{
		for(int i=2;i<8;i++)
		sum=sum+s[i];
		sum=sum/6;
	}
	else
	{
		for(int i=1;i<9;i++)
		sum=sum+s[i];
		sum=sum/8;
	}
	cout<<sum;
	return 0;
	
}
 

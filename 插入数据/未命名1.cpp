#include <iostream>
using namespace std;
int main()
{   bool ok=true;
    void sort(double arr[],int n);
	int x;
	cin>>x;
	double* arr=new double[x]();
	for(int i=0;i<x;++i)
    cin>>arr[i];
    double m;
    cin>>m;
    sort(arr,x);
    for(int i=0;i<x;++i)
    if(arr[i]<=m)
    {
	cout<<i+1;
	ok=false;
	break;
    }
    if(ok)
    cout<<x+1;
    return 0;
 } 
 void sort(double arr[],int n)
 {
 	for(int i=0;i<n;++i)
	{
	int a=i;
	for(int j=i;j<n;++j)
	if(arr[a]<arr[j])
	a=j;
	swap(arr[i],arr[a]);
   } 
 }
 void swap(double& a,double& b)
 {
 	double temp=a;
 	a=b;
 	b=temp;
 }
 /*
 10 1 4 5 2 3 6 7 8 10 9
11
*/ 

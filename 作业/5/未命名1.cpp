#include <iostream>
using namespace std;
int main()
{
	double get_ave(int* arr,int n);
	int arr[4]={1,2,1,2};
	int brr[2][4]={{1,2,2,3},{1,25,3,1}};
	cout<<get_ave(arr,4)<<endl;
	cout<<get_ave((int*)brr,2*4);
	return 0;
}
double get_ave(int* arr,int n)
{
	int sum=0;
	for(int i=0;i<n;++i)
	sum=sum+*(arr+i);
	double ave=double(sum)/n;
	return ave;
}

#include <iostream>
//1 2 3 4 5
//1 2 3 4 5 6
using namespace std;
int main()
{int brr[5];
int arr[2][3];
double getarr(int* arr);
double getarr(int arr[][3]);
for(int i=0;i<5;++i)
	cin>>brr[i];
for(int i=0;i<2;++i)
	for(int j=0;j<3;++j)
		cin>>arr[i][j];
cout<<getarr(brr)<<' '<<getarr(arr);
return 0;
}
double getarr(int* arr)
{int sum=0;
	for(int i=0;i<5;++i)
	sum+=arr[i];
	double ave=double(sum)/5;
	return ave;
}
double getarr(int arr[][3])
{
int sum=0;
	for(int i=0;i<2;++i)
	for(int j=0;j<3;++j)
	sum+=arr[i][j];
	double ave=double(sum)/6;
	return ave;
}

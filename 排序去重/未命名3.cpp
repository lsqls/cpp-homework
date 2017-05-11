#include <iostream>//10 1 2 3 4 5 0 7 8 0 10
#include <algorithm>
using namespace std;
int main()
{void mdzz(int* arr,int n);
	int x;
	cin>>x;
	int *arr=new int[x];
	for(int i=0;i<x;++i)
	cin>>arr[i];
	mdzz(arr,x);
	return 0;
	
}
void mdzz(int* arr,int n)
{
//void qsort(int a[],int low,int high);
void swap(int* a,int* b);
int count=0;
for(int i=0,j=n-1;i<=j;i++)
if(arr[i]==0){
swap(&arr[i],&arr[j]);
count++;
j--;
}
std::sort(arr,arr+(n-count));
for(int i=0;i<n-1;i++)
	cout<<arr[i]<<' ';
cout<<arr[n-1];
}
/*void qsort(int a[],int low,int high)
 {
 	int first=low,last=high;
 	int key=a[first];
 	if(first>=last)
 	{
 		return;
	 };
	 while(first<last)
	 {
	 	while(first<last&&key<=a[last])
	 	last--;
	 	a[first]=a[last];
	 	while(first<last&&key>=a[first])
	 	first++;
	 	a[last]=a[first]; 
	 }
	 a[first]=key;
	 qsort(a,low,first-1);
	 qsort(a,first+1,high);
 }*/
 void swap(int* a,int* b)
 {
 	int temp=*b;
 	*b=*a;
 	*a=temp;
 }

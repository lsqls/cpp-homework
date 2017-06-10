#include <iostream>
#include <cstring>
using namespace std;
int main()
{	void swap(char* arr);
	void show(char* arr);
	char brr[20]="hello world";
	char* arr=brr;
	show(arr);
	swap(arr);
	show(arr);
	return 0;
}
void swap(char* arr)
{	char temp;
	int n=strlen(arr);
	for(int i=0;i<n/2;++i)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-i-1]=temp;
	}
}
void show(char* arr)
{	int n=strlen(arr);
	for(int i=0;i<n;++i)
	cout<<arr[i];
	cout<<endl;
}

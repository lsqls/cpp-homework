#include <iostream>
using namespace std;
int main()
{   void tiao(int arr[]);
    bool equal(int arr[]);
	int arr[10];
	int count=0;
	for(int i=0;i<10;++i)
	cin>>arr[i];//12 2 8 22 16 4 10 6 14 20
	while(!equal(arr))
	{
	tiao(arr);
	count++;
    }
    cout<<count<<' '<<arr[0];
	return 0;
} 
void tiao(int arr[])
{
	int brr[10];
	for(int i=0;i<10;++i)
	{
		brr[i]=arr[i];
	}
	for(int i=1;i<10;++i)
	{
		arr[i]=brr[i]/2+brr[i-1]/2;
	}
	arr[0]=brr[0]/2+brr[9]/2;
	for(int i=0;i<10;++i)
	{
		if(arr[i]%2)
		{
			arr[i]=arr[i]+1; 
		}
	}
}
bool equal(int arr[])
{
	bool ok=true;
	for(int i=0;i<9;++i)
	if(arr[i]!=arr[i+1])
	{
		ok=false;
		break;
	}
	return ok;
}

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main()
{	void bubble_sort(int bubble[],int n);
	ofstream file("data.txt");
	srand((unsigned)time(NULL));
	int arr[100];
	for(int i=0;i<100;++i)
	{
		arr[i]=rand()%1001;
		file<<arr[i]<<endl;
	}
	bubble_sort(arr,100);
	for(int i=0;i<100;++i)
		file<<arr[i]<<endl;
	file.close();
	return 0;
}
void swap(int&a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void bubble_sort(int bubble[],int n)
{
void swap(int &a,int &b);
int i=n-1;
bool swapped;
do
{
swapped=false;
	for(int j=0;j<i;++j)
	{
		if(bubble[j]<bubble[j+1])
		{
		swap(bubble[j],bubble[j+1]);
		swapped=true;
	    }
	}
	--i;
}
while(swapped);
 } 

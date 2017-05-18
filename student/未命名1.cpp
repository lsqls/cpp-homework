#include <iostream>
#include <algorithm>
using namespace std;
struct stu
{
	char name[100];
	double score[5];
	double ave;
};
int main()
{
void swap(stu* a, stu* b);
stu st[3];
int m;
for(int i=0;i<3;++i)
{	double sum=0;
	cin>>st[i].name;
	for(int j=0;j<5;++j)
	{
		cin>>st[i].score[j];
		sum+=st[i].score[j];
	}
	st[i].ave=sum/5;
}
for(int i=0;i<3;++i)
	{
	int a=i;
	for(int j=i;j<3;++j)
	if(st[a].ave<st[j].ave)
	a=j;
	swap(&st[i],&st[a]);
   } 
	for(int i=0;i<3;++i)
{	
	cout<<st[i].name<<' ';
	for(int j=0;j<5;++j)
	{
		cout<<st[i].score[j]<<' ';		
	}
	cout<<st[i].ave<<endl;
}	return 0;
}
void swap(stu* a,stu* b)
{
	stu temp;
	temp=*a;
    *a=*b;
	*b=temp;	
}
/*
Jane 90 80 75 60 85
Mark 85 78 98 85 86
Lily 56 65 75 68 80
*/

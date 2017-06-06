#include <iostream>
#include <fstream>
using namespace std;
struct student
{
	char name[100];
	char sex[10];
	long id;
	double score;
};
int main()
{
	ifstream rfile("scorce.txt");
	ofstream wfile("fail.txt");
	int x;
	rfile>>x;
	student* st=new student[x];
	for(int i=0;i<x;++i)
	{
		rfile>>st[i].name>>st[i].sex>>st[i].id>>st[i].score;
		if(st[i].score<60)
		{
		cout<<st[i].name<<' '<<st[i].sex<<' '<<st[i].id<<' '<<st[i].score<<endl;
		wfile<<st[i].name<<' '<<st[i].sex<<' '<<st[i].id<<' '<<st[i].score<<endl;
		}
	}
	rfile.close();
	wfile.close();
	return 0;
}

#include <iostream>
#include <fstream> 
#include <string>
int main()
{
	using namespace std;
	char file1[100],file2[100];
	int count=0;int equal_count=0;char chatter1;char chatter2;double final;
	cout<<"输入两个文件的路径（中间以空格分隔）："<<endl;
	cin>>file1>>file2;
	ifstream ifile1(file1);
	ifstream ifile2(file2);
    while(ifile1||ifile2)
    {
    	ifile1>>chatter1;
    	ifile2>>chatter2;
	count++;
	if(chatter1==chatter2)
	{
		equal_count++;
	}
	}
	final=double(equal_count)/double(count)*100;
	cout<<final<<"%";
	system("pause");
	return 0;
	
	
	
}



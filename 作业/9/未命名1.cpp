#include <iostream>
using namespace std;
class MyString
{
private:
char *str;
public:
MyString(char *s);
//MyString(const MyString&);			// 拷贝构造函数
int strlenth(void)const;			// 字符串长度
int strcmpp(const MyString&) const;  // 比较字符串
void strcpy(const MyString&);  // 拷贝字符串
void strcat(const MyString&);  // 连接字符串
void display();
~MyString();
};
MyString::MyString(char *s)
{	int i=0;
	str = new char[100];
	while(*(s+i)!=' ')
	{
	*(str+i)=*(s+i);
	i++;
	} 
}
MyString::~MyString(){delete [] str;}
int MyString::strlenth()const
{
    int i=0;
	while(*(str+i)!=' ')
	{
	i++;
	}
	return i;
}
int MyString::strcmpp(const MyString& a)const
{	int ret;
	char* s1=this->str;
	char* s2=a.str;
	while( !(ret = *(unsigned char*)s1 - *(unsigned char*)s2) && *s1)
    {
        s1 ++;
        s2 ++;
    }
 
     if(ret < 0) return -1;
     else if( ret >0) return 1;
     return 0;
}
void MyString::strcpy(const MyString& a)
{	str = new char[100];
	char* s0=this->str;
	char* s=a.str;
    int i=0;
	while(*(s+i)!=' ')
	{
	*(s0+i)=*(s+i);
	i++;
	}
	*(s0+i)='\0';
}
void MyString::strcat(const MyString& a)
{	str = new char[100];
	char* s0=this->str;
	char* s=a.str;
    int i=0;
    int j=0;
    while(*(s0+i)!= '\0')
        i++;
    while(*(s+j)!=' ')
    {
	 *(s0+i)= *(s+j);
	 j++;
	 i++;
	}
	*(s0+i)='\0';
}
void MyString::display()
{
	puts(str);
}
int main() 
{	{char aa[100],bb[100];
	cin >> aa>>bb;
	MyString test1(aa);
	test1.display();
	MyString test2(bb);
	test2.display();
	MyString test3(test1);
	test3.display();
	int n=test1.strlenth();
	cout << n << endl;
    n=test1.strcmpp(test2);
	cout << n << endl;
/*	test1.strcpy(test2);
	test1.display();
	test1.strcat(test2);
	test1.display();
	test3.strcat(test1);//cat 函数有问题。。。。
	test3.display();
*/ }
	return 0;
}


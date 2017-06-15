#include<iostream>
using namespace std;
class MyString
{
private:
	char *str;
public:
	MyString(char *s);
	MyString(const MyString&a);
	int Strlenth()const;
	int Strcmpp(const MyString&a)const;
    void sstrcpy(const MyString&a);
	void sstrcat(const MyString&a);
	~MyString();
	void display();
};
MyString::MyString(char *s)
{	int strlen(const char* src);
	char* strcpy(char *strD, const char *strS);
	if (s == NULL)
	{
		str = new char[1];
		str[0] = '\0';
	}
	else
	{
		str = new char[strlen(s) + 1];
	    strcpy(str,s);
	}
}
MyString::MyString(const MyString&a)
{	int strlen(const char* src);
	char* strcpy(char *strD, const char *strS);
	str = new char[strlen(a.str) + 1];
	strcpy(str, a.str);
}
int MyString::Strlenth()const
{	int strlen(const char* src);
	return strlen(str);
}
int MyString::Strcmpp(const MyString&a)const
{	int strcmp(const char *s1, const char *s2);
	int x;
	x = strcmp(a.str, str);
	return x;
}
void MyString::sstrcpy(const MyString&a)
{	int strlen(const char* src);
	char* strcpy(char *strD, const char *strS);
	str = new char[strlen(a.str) + 1];
	strcpy(str, a.str);
}
void MyString::sstrcat(const MyString&a)
{	int strlen(const char* src);
	char* strcpy(char *strD, const char *strS);
	char* strcat(char *strD, const char *strS);
	char *p = str;
	str = new char[strlen(a.str) + strlen(p) + 1];
	strcpy(str, p);
	strcat(str, a.str);
}
MyString::~MyString()
{}
void MyString::display()
{
	puts(str);
}
int main()
{
	char aa[100],bb[100];
	cin >> aa>>bb;
	MyString test1(aa);
	test1.display();
	MyString test2(bb);
	test2.display();
	MyString test3(test1);
	test3.display();
	int n=test1.Strlenth();
	//cout << n << endl;
    n=test1.Strcmpp(test2);
	//cout << n << endl;
	test3.sstrcat(test1);
	test3.display();
	test1.sstrcpy(test2);
	test1.display();
	return 0;
}
int strlen(const char* src)
{
    int count =0;
    while(*(src+count) != '\0') 
        count++;
    return count;
}
char* strcat(char *strD, const char *strS)
{
    char* address = strD;
    while(*strD != '\0')
        strD ++;
    while(*strD++ = *strS++);
    return address; 
}
int strcmp(const char *s1, const char *s2)
{
    int ret;
    while( !(ret = *(unsigned char*)s1 - *(unsigned char*)s2) && *s1)
    {
        s1 ++;
        s2 ++;
    }

    if(ret < 0) return -1;
    else if( ret >0) return 1;
    return 0;
}
char* strcpy(char *strD, const char *strS)
{
    char* address = strD ;
    while(*strD++ = *strS++);
    return address;
}

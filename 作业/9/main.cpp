#include <iostream>
using namespace std;
class MyString
{
private:
char *str;
public:
MyString(char *s);
MyString(const MyString&);			// ±´¹¹Ôìº¯ÊıÃ»ÓĞĞ´ 
int strlenth(void)const;			// ×Ö·û´®³¤¶È
int strcmpp(const MyString&)const;  // ±È½Ï×Ö·û´®
void strcpy(const MyString&);  // ¿½±´×Ö·û´®
void strcat(const MyString&);  // Á¬½Ó×Ö·û´®
~MyString();
};
MyString::MyString(char *s)
{	/*int i=0;
	while(*(s+i)!=' ')
	{
	*(str+i)=*(s+i);
	i++;
	}*/
	this->str=s;
}
MyString::~MyString(){}
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
{
	char* s0=this->str;
	char* s=a.str;
    int i=0;
	while(*(s+i)!=' ')
	{
	*(s0+i)=*(s+i);
	i++;
	}
}
void MyString::strcat(const MyString& a)
{
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
}
int main() 
{	
	return 0;
}

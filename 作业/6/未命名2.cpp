#include <iostream>
using namespace std;
int main()
{	void swap(char** ap,char** bp);
	char *ap="hello";
	char *bp="how are you";
	swap(&ap,&bp);
	cout<<ap<<endl<<bp;
	return 0;
}
void swap(char** ap,char** bp)
{
char* temp;
temp=*ap;
*ap=*bp;
*bp= temp;
}

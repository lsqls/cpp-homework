#include <iostream>
#include <cstring>
using namespace std;
int main()
{	
	void convert(char source[], char target[], char codebook[]);
	char* codebook="abcdefghijklmnopqrstuvwxyzngzqtcobmuhelkqdawxfyivrsj";
	char source[100],target[100];
	cin>>source;
	convert(source,target,codebook);
	cout<<target;
	return 0;
}
void convert(char source[], char target[], char codebook[])
{
	for(int i=0;i<strlen(source);++i)
		for(int j=0;j<strlen(codebook)/2;++j)
			if(source[i]==codebook[j])
			target[i]=codebook[j+strlen(codebook)/2];
}

#include <iostream>
using namespace std;
int main()
{   int f(int n);
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
 } 
 int f(int n)
 {
 	if(n==1)
 	{
 		return 1;
	 }
	 if(n==2)
	 {
	 	return 1;
	 }
	 else
	 {
	 	return f(n-1)+f(n-2);
	 }
 }

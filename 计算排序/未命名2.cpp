#include <iostream>
using namespace std;
int main()
{int n,m;
 int f(int n); 
cin>>n>>m;
cout<<f(n)/f(n-m);
	return 0;
 } 
 int f(int n)
 {  int fn=1;
 	for(int i=1;i<=n;i++)
 	fn=fn*i;
 	return fn;
 }
 

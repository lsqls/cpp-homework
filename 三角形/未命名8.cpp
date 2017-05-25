#include <iostream>
using namespace std;
int main()
{
	bool angle(int m,int n,int p);
	bool right_angle(int m,int n,int p);
	int m,n,p;
	cin>>m>>n>>p;
	bool br=true;
		if(!angle(m,n,p)||m<0||p<0||n<0)
        {	cout<<"Not a triangle";br=false;}
    	if(m==n&&n==p&&br)
        	{cout<<"A equileteral triangle";br=false;}
        if((m==n||n==p||p==m)&&br)
        	{cout<<"A isosceles triangle";br=false;}
        if(right_angle(m,n,p)&&br)
        	{	cout<<"A right triangle";br=false;}
        if(angle(m,n,p)&&br)
        	{	cout<<"A triangle";br=false;}
        return 0;


}
bool right_angle(int m,int n,int p)
{	bool ok=false;
	if(m*m==(n*n+p*p))
		ok=true;
	if(n*n==(p*p+m*m))
		ok=true;
	if(p*p==(n*n+m*m))
		ok=true;
	return ok;
}
bool angle(int m,int n,int p)
{
	bool ok=false;
	if((m<(n+p))&&(n<(p+m))&&(p<(n+m)))
		ok=true;
	else 
		ok=false;
	return ok;
}



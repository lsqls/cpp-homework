#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *p = new int[n]();
	int *t = p;
	for (int i = 1; i <= n; ++i)
	{
		cin >> *t;
		++t;
	}
	t = p;
	sort(p, p + n);
	int tmp(0);
	if (*p != 0)
	{
		for (int i = 1; i <= n; ++i)
		{

			if (i != n) cout << *t << ' ';
			else cout << *t;
			++t;
		}
		return 0;
	}
	for (int i = 1; i <= n; ++i)
	{
		if (*t == 0)tmp++;
		else cout << *t<<' ';
		++t;
	}
	
	for (int i = 1; i <= tmp; ++i)
	{
          if(i!=tmp)cout << 0 << ' ';
		  else cout << 0;
	}
	delete[]p;
	return 0;
}


#include <iostream>
int main()
{
	using namespace std;
	char number[6];
	cin >> number;
	for (int i = 0; i < sizeof(number); i++)
	{
cout << number[i] << ' ';
	}
	return 0;
}

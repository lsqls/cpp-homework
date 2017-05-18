#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    char a[5][20];
    for (int i = 0; i < 5; ++i)
        cin >> a[i];
    for(int i=0;i<4;++i)
        for(int j=i+1;j<5;++j)
            if (strcmp(a[i], a[j]) > 0)
            {
                char *p = new char[20]();
                strcpy(p, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], p);
                delete[]p;
            }
 
    for (int i = 0; i < 5; ++i)
        (i != 4) ? cout << a[i] << endl: cout << a[i];
    return 0;
}

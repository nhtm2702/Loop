#include <iostream>
using namespace std;
int main()
{
    int n,Max = 0;
    cin >> n;
    int a[n];
    int d[6];
    for (int i=1;i<6;i++) d[i]=0;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        d[a[i]] ++;
    }
    for (int i=1;i<6;i++) Max=max(Max,d[i]);
    for (int i=1;i<6;i++)
        if (d[i] == Max)
    {
        cout << i;
        return 0;
    }
}


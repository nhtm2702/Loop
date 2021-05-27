#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],d[100];
    for (int i=1;i<100;i++) d[i] = 0;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        d[a[i]] ++;
    }
    sort(a,a+n);
    int kq = 0;
    for (int i=2;i<100;i++) kq = max(kq,d[i]+d[i-1]);
    cout << kq;
}

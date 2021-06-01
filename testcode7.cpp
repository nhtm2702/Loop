#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,kq = 0;
    cin >> n;
    int a[n],t[n];
    for (int i=0;i<n;i++) t[i] = 0;
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    t[0] = a[0];
    for (int i=1;i<n-1;i++) t[i] = t[i-1]+a[i];
    for (int i=0;i<n;i++) kq += t[i];
    cout << kq;
    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int kq = abs(a[0]-a[1]);
    for (int i=2;i<n;i++) kq = min(kq,abs(a[i]-a[i-1]));
    cout << kq;
    return 0;
}

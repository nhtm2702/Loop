#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for (int i=0;i<n;i++)
        cin >> a[i] >> b[i];
    int m1=a[0],m2=b[0];
    for (int i=1;i<n;i++)
    {
        m1=min(m1,a[i]);
        m2=min(m2,b[i]);
    }
    cout << m1*m2;
    return 0;
}

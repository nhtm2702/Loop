#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n],d[n];
    for (int i=0;i<n;i++) d[i] = 0;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        int so = a[i];
        while (so != 0)
        {
            int j = so % 10;
            if (j != 0 && a[i] % j == 0) d[i] ++;
            so = so / 10;
        }
    }
    for (int i=0;i<n;i++)
        cout << d[i] << endl;
    return 0;
}

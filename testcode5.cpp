#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int d[10];
    for (int i=0;i<10;i++) d[i] = 0;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        d[a[i]] ++;
    }
    for (int i=0;i<10;i++) cout << i << " : " << d[i] << endl;
    return 0;
}

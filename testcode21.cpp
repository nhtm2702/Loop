#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    a[0]=1;a[1]=1;
    int i=1;
    while (a[i] < n)
    {
        i++;
        a[i] = a[i-1] + a[i-2];
    }
    if (a[i] ==  n) cout << "Thuoc day Fibonacci" << endl;
    else cout << "Khong thuoc day Fibonacci" << endl;
    for (int j=0;j<=i;j++)
        if (a[j] <= n) cout << a[j] << " ";
    return 0;
}

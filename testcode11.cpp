#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],seen[n],flag = 0;
    for (int i=0;i<n;i++) seen[i] = 0;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        if (seen[a[i]] == 0) seen[a[i]] = 1;
        else flag = 1;
    }
    if (flag == 1) cout << "Yes";
    else cout << "No";
    return 0;
}


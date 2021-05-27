#include <iostream>
#include <cmath>
using namespace std;

bool NT(int n)
{
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++)
        if (n % i == 0) return false;
    return true;
}

bool HH(int n)
{
    int t = 0;
    for (int i=1;i<n;i++)
        if (n % i == 0) t +=i;
    if (t == n) return true;
    return false;
}

bool CP(int n)
{
    if (sqrt(n) == round(sqrt(n))) return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i=2;i<=n;i++)
        if (NT(i)) cout << i << " ";
    cout << endl;
    for (int i=2;i<=n;i++)
        if (HH(i)) cout << i << " ";
    cout << endl;
    for (int i=2;i<=n;i++)
        if (CP(i)) cout << i << " ";
    cout << endl;
    return 0;
}

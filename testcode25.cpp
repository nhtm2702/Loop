#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n<2) {cout << "no";return 0;}
    for (int i=2;i<=sqrt(n);i++)
        if (n%i == 0)
    {
        cout << "no";
        return 0;
    }
    cout << "yes";
    return 0;
}

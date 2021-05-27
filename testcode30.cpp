#include <iostream>
using namespace std;
int main()
{
    int x,y,r;
    cin >> x >> y;
    if (x == 0 || y == 0) {cout << 0;return 0;}
    int t = x*y;
    do
    {
        r = x % y;
        x = y;
        y = r;
    }while (y!=0);
    if (t>0) cout << t/x;
    else cout << t/x*(-1);
    return 0;
}


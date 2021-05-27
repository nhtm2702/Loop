#include <iostream>
using namespace std;
int UCLN(int x,int y)
{
    int r;
    do
    {
        r = x % y;
        x = y;
        y = r;
    }while (y!=0);
    return x;
}

int main()
{
    int x,y;
    cin >> x >> y;
    if (y/UCLN(x,y)!=1) cout << x/UCLN(x,y) << "/" << y/UCLN(x,y);
    else cout << x/UCLN(x,y);
    return 0;
}

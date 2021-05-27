#include <iostream>
using namespace std;
int main()
{
    int x,y,r;
    cin >> x >> y;
    do
    {
        r = x % y;
        x = y;
        y = r;
    }while (y!=0);
    cout << x;
    return 0;
}

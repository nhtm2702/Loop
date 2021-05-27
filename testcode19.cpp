#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> b;
    cout << b << " ";
    if (b>0)
    {
        a = b;
        do
        {
            cin >> b;
            if (b!=a && b>0) cout << b << " ";
            a = b;
        }while (b > 0);
    }
    return 0;
}


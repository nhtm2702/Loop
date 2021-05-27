#include <iostream>
using namespace std;

string bin(long int n)
{
    string kq="";
    while (n!=0)
    {
        int a = n%2;
        char c = a + 48;
        kq = c + kq;
        n /= 2;
    }
    return kq;
}

int main()
{
    long int n;
    cin >> n;
    if (n >= 0) cout << bin(n);
    else cout << bin(-n);
    return 0;
}

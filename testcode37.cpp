#include <iostream>
using namespace std;
unsigned long int GT(int n)
{
    unsigned long int t=1;
    for (int i=2;i<=n;i++) t*=i;
    return t;
}

int main()
{
    unsigned long int n,k,tu,mau;
    do
    {
        cin >> n >> k;
        tu = GT(n);
        mau = GT(k);
        tu = tu/mau;
        mau = GT(n-k);
        if (n!=-1 && k!=-1) cout << tu/mau << endl;
    }while (n!=-1 && k!=-1);
    return 0;
}

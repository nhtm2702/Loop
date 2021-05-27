#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double a[5],dtb = 0;
    for (int i=0;i<5;i++)
    {
        cin >> a[i];
        dtb += a[i];
    }
    cout << fixed << setprecision(2) << dtb / 5;
    return 0;
}

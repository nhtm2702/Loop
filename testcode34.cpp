#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    cin >> n;
    double s[n],h[n],dtb = 0,so = 0;
    bool flags = true,flagh = true;
    for (int i=0;i<n;i++)
    {
        cin >> s[i] >> h[i];
        if (s[i] >= 0 && s[i] <= 10 && h[i] >= 1 && h[i] <=3)
            {
                    dtb += s[i]*h[i];
                    so += h[i];
            }
        if (s[i] < 0 || s[i] > 10) flags = false;
        if (h[i] < 1 || h[i] > 3) flagh = false;
    }
    if (flags == false) {cout << "Sai diem so";return 0;}
    if (flagh == false) {cout << "Sai he so";return 0;}
    cout << "Tong so mon hoc can tinh DTB: " << n << endl;
    for (int i=0;i<n;i++)
    {
        if (s[i] >= 0 && s[i] <= 10) cout << "Diem mon hoc " << i << ": " << fixed << setprecision(1) << s[i] << endl;
        if (h[i] >= 1 && h[i] <=3) cout << "He so mon hoc " << i << ": " << fixed << setprecision(1) << h[i] << endl;
    }
    cout << "Tong so he so: " << fixed << setprecision(1) << so << endl;
    cout << "Diem trung binh cua " << n << " mon hoc: " << fixed << setprecision(1) << dtb / so;
    return 0;
}


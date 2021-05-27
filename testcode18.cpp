#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double F,C,K;
    cin >> F;
    C = (F-32) * 5 / 9;
    K = C + 273.15;
    cout << F;
    cout << fixed << setprecision(2) << " " << C << " " << K;
    return 0;
}


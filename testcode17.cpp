#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double Min,Max,Step,F,C,K;
    cin >> Min >> Max >> Step;
    F = Min;
    while (F <= Max)
    {
        C = (F-32) * 5 / 9;
        K = C + 273.15;
        cout << fixed << setprecision(2) << F << " " << C << " " << K << endl;
        F += Step;
    }
    return 0;
}

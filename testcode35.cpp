#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double score,dtb = 0,n = 0;
    do
    {
        cin >> score;
        if (score >= 0 && score <= 10)
        {
            dtb += score;
            n ++;
        }
    }while (score >= 0);
    cout << dtb << " " << n << endl;
    cout << fixed << setprecision(2) << dtb / n;
    return 0;
}

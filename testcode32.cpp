#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a,Max,Min;
    cin >> a;
    Max = a;
    Min = a;
    if (n == 1)
    {
        cout << Max << endl;
        cout << Min;
        return 0;
    }
    else
    {
        for (int i=1;i<n;i++)
        {
            cin >> a;
            Max = max(Max,a);
            Min = min(Min,a);
        }
        cout << Max << endl;
        cout << Min;
        return 0;
    }
}

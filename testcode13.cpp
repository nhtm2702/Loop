#include <iostream>
using namespace std;
int main()
{
    int n,Max,Min,chan = 0,le = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    Max=a[0];
    Min=a[0];
    for(int i=0;i<n;i++)
    {
        if (a[i]%2 == 0) chan +=a[i];
        else le ++;
        Max = max(a[i],Max);
        Min = min(a[i],Min);
    }
    cout << Max << endl;
    cout << Min << endl;
    cout << chan << endl;
    cout << le;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
            if ((i+j+1)%n != 0) a[i][j] = (i+j+1)%n;
            else a[i][j] = n;
        }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}

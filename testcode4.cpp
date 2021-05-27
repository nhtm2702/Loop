#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    char s;
    int a[m+2][n+2];
    for (int i=0;i<n+2;i++) a[0][i] = 0;
    for (int i=0;i<n+2;i++) a[m+1][i] = 0;
    for (int i=0;i<m+2;i++) a[i][0] = 0;
    for (int i=0;i<m+2;i++) a[i][n+1] = 0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
        {
            cin >> s;
            if (s == '*') a[i+1][j+1] = 1;
            else a[i+1][j+1] = 0;
        }
    for (int i=1;i<m+1;i++)
    {
        for (int j=1;j<n+1;j++)
        {
            if (a[i][j] == 1) cout << "* ";
            else cout << a[i-1][j] + a[i-1][j-1] + a[i][j-1] + a[i+1][j-1] + a[i+1][j] + a[i+1][j+1] + a[i][j+1] + a[i-1][j+1] << " ";
        }
        cout << endl;
    }
    return 0;
}

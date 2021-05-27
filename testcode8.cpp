#include <iostream>
#include <string>
using namespace std;

void print(int n,int **a)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++) cout << a[i][j] << " ";
        cout << endl;
    }
}

void fil(int x,int y,int n,int **a)
{
    if (a[x][y] == n*n) print(n,a);
    else
    {
        if (y+1 < n) //sang phai duoc
        {
            if (x-1 >= 0) //di len duoc
            {
                if (a[x-1][y+1] == 0)
                {
                    a[x-1][y+1] = a[x][y]+1;
                    fil(x-1,y+1,n,a);
                }
                else
                {
                    a[x+1][y] = a[x][y] + 1;
                    fil(x+1,y,n,a);
                }
            }
            else //khong di len duoc
            {
                if (a[n-1][y+1] == 0)
                {
                    a[n-1][y+1] = a[x][y] + 1;
                    fil(n-1,y+1,n,a);
                }
                else
                {
                    a[x+1][y] = a[x][y] + 1;
                    fil(x+1,y,n,a);
                }
            }
        }
        else if (y+1 == n) //khong sang phai duoc
        {
            if (x-1 >= 0) //di len duoc
            {
                if (a[x-1][0] == 0)
                {
                    a[x-1][0] = a[x][y]+1;
                    fil(x-1,0,n,a);
                }
                else
                {
                    a[x+1][y] = a[x][y] + 1;
                    fil(x+1,y,n,a);
                }
            }
            else
            {
                a[x+1][y] = a[x][y] + 1;
                fil(x+1,y,n,a);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int **a=new int *[n];
    for (int i=0;i<n;i++)
        *(a+i)=new int [n];
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++) a[i][j] = 0;
    a[0][n/2] = 1;
    fil(0,n/2,n,a);
    return 0;
}

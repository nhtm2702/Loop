#include <iostream>
#define MAX 100

using namespace std;

void print(int a[][MAX], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}

void fil(int a[][MAX], int row, int col)
{
    int left = 0, up = 0, down = row, right = col, d = 1, n = row * col;
    while(d <= n)
    {
        for(int i = left; i < right; i++)
        {
            if(d <= n)
            {
                a[up][i] = d++;
            }
        }
        up++;
        for(int i = up; i < down; i++)
        {
            if(d <= n)
            {
                a[i][right - 1] = d++;
            }
        }
        right--;
        for(int i = right - 1; i >= left; i--)
        {
            if(d <= n)
            {
                a[down - 1][i] = d++;
            }
        }
        down--;
        for(int i = down - 1; i >= up; i--)
        {
            if(d <= n)
            {
                a[i][left] = d++;
            }
        }
        left++;
    }
}

int main()
{
    int a[MAX][MAX], row,col;

    cin >> row >> col;
    fil(a, row, col);
    print(a, row, col);
    return 0;
}

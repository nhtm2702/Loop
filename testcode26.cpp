#include <iostream>
using namespace std;

void print (int m,int n)
{
    for (int i=0;i<m;i++) cout << " ";
    for (int i=m;i<n+m;i++) cout << "*";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    b[n-1]=1;
    for (int i=n-2;i>=0;i--) b[i]=b[i+1]+2;
    for (int i=0;i<n;i++) a[i] = i;
    for (int i=0;i<n;i++) print(a[i],b[i]);
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    string n;
    int t = 0;
    cin >> n;
    for (int i=0;i<n.length();i++)
    {
        int c = n[i]-48;
        t += c;
    }
    cout << t;
    return 0;
}

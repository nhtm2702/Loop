#include <iostream>
using namespace std;

string convert(int n)
{
    string kq = "";
    while (n != 0)
    {
        int a = n % 10;
        char c = a + 48;
        kq += c;
        n /= 10;
    }
    return kq;
}

bool PL(string s)
{
    for (int i=0;i<s.length()/2;i++)
            if (s[i] != s[s.length()-i-1]) return false;
    return true;
}

int main()
{
    int n,a,b;
    cin >> n;
    int kq[n];
    for (int i=0;i<n;i++) kq[i] = 0;
    for (int i=0;i<n;i++)
    {
        cin >> a >> b;
        for (int j=a;j<=b;j++)
        {
            string s = convert(j);
            if (PL(s)) kq[i] ++;
        }
    }
    for (int i=0;i<n;i++) cout << kq[i] << endl;
    return 0;
}

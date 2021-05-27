#include <iostream>

using namespace std;

bool PL(string s)
{
    for (int i=0;i<s.length()/2;i++)
            if (s[i] != s[s.length()-i-1]) return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (PL(s)) cout << "Yes";
    else cout << "No";
    return 0;
}

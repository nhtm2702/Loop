#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.length()<2)
    {
        if (s == "0") cout << "khong";
        if (s == "1") cout << "mot";
        if (s == "2") cout << "hai";
        if (s == "3") cout << "ba";
        if (s == "4") cout << "bon";
        if (s == "5") cout << "nam";
        if (s == "6") cout << "sau";
        if (s == "7") cout << "bay";
        if (s == "8") cout << "tam";
        if (s == "9") cout << "chin";
    }
    return 0;
}

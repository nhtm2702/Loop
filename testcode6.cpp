#include <iostream>
#include <iomanip>
using namespace std;

struct ScoreStd
{
    int STT;
    double Toan;
    double Ly;
    double Anh;
    double DTB;
};

int main()
{
    int n;
    double a,b,c;
    cin >> n;
    ScoreStd student[n];
    for (int i=0;i<n;i++)
    {
        cin >> a >> b >> c;
        if (a>10 || b>10 || c>10 || a<0 || b<0 || c<0) {cout << "invalid";return 0;}
        student[i].STT = i+1;
        student[i].Toan = a;
        student[i].Ly = b;
        student[i].Anh = c;
        student[i].DTB = (a+b+c)/3;
    }
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
        if (student[i].Toan <= student[j].Toan)
    {
        swap(student[i].Toan,student[j].Toan);
        swap(student[i].Ly,student[j].Ly);
        swap(student[i].Anh,student[j].Anh);
        swap(student[i].STT,student[j].STT);
        swap(student[i].DTB,student[j].DTB);
    }
    cout << "Theo diem mon Toan:" << endl;
    cout << "SV Toan Ly Anh" << endl;
    for (int i=0;i<n;i++)
        cout << fixed << setprecision (1) << student[i].STT << " " << student[i].Toan << " " << student[i].Ly << " " << student[i].Anh << endl;
    cout << endl;
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
        if (student[i].Anh <= student[j].Anh)
    {
        swap(student[i].Toan,student[j].Toan);
        swap(student[i].Ly,student[j].Ly);
        swap(student[i].Anh,student[j].Anh);
        swap(student[i].STT,student[j].STT);
        swap(student[i].DTB,student[j].DTB);
    }
    cout << "Theo diem mon Anh:" << endl;
    cout << "SV Toan Ly Anh" << endl;
    for (int i=0;i<n;i++)
        cout << fixed << setprecision (1) << student[i].STT << " " << student[i].Toan << " " << student[i].Ly << " " << student[i].Anh << endl;
    cout << endl;
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
        if (student[i].DTB <= student[j].DTB)
    {
        swap(student[i].Toan,student[j].Toan);
        swap(student[i].Ly,student[j].Ly);
        swap(student[i].Anh,student[j].Anh);
        swap(student[i].STT,student[j].STT);
        swap(student[i].DTB,student[j].DTB);
    }
    cout << "Theo diem trung binh:" << endl;
    cout << "SV TB Toan Ly Anh" << endl;
    for (int i=0;i<n;i++)
        cout << fixed << setprecision (1) << student[i].STT << " " << student[i].DTB << " " << student[i].Toan << " " << student[i].Ly << " " << student[i].Anh << endl;
    return 0;
}

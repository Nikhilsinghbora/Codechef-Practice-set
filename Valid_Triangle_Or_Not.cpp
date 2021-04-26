
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    //fing semi para
    float semipara = (float)(a + b + c) / 2;

    //using heron's formula
    double ans = semipara * (semipara - a) * (semipara - b) * (semipara - c);

    if (sqrt(ans) > 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}

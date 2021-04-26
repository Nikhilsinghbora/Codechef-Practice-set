#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int triangle_check(int a, int b, int c)
{
    float semipara = (float)(a + b + c) / 2;

    //using heron's formula
    double ans = semipara * (semipara - a) * (semipara - b) * (semipara - c);

    if (sqrt(ans) > 0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (triangle_check(a, b, c) == 1)
    {
        if (a == b && a == c && b == c)
            cout << 1 << endl;

        else if (a == b || b == c || a == c)
            cout << 2 << endl;

        else
            cout << 3 << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}
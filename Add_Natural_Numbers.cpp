#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
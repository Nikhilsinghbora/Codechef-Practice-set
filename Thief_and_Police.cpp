#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll n, m;
    cin >> n >> m;
    int x, a, y, b;
    cin >> x >> y >> a >> b;
    ll sump = max((n - a), (m - b));
    ll sumt = (n - x) + (m - y);
    if (sumt <= sump)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

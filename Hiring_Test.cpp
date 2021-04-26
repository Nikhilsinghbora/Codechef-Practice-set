#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        string verdict = " ";
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int full = 0;
            int partial = 0;
            for (int j = 0; j < (int)s.size(); j++)
            {
                if (s[j] == 'F')
                {

                    full++;
                }
                else if (s[j] == 'P')
                {

                    partial++;
                }
            }
            if ((full >= x) || (full >= (x - 1) && partial >= y))
            {
                verdict += "1";
            }
            else
            {

                verdict += "0";
            }
        }
        cout << verdict << '\n';
    }
    return 0;
}

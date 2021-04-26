#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    static int count = 1;
    cin >> n;
    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            k += 4 ;
        }

        for (int j = 1; j <= 5; j++)
        {
            if (i % 2 != 0)
            {
                cout << k << " ";
                k++;
            }
            else
            {
                cout << k << " ";
                k--;
            }
        }
        // k += 5;
        cout << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp = 0;
    cin >> n;
    vector<int> vi;
    for (int i = 0; i < n; i++)
    {
        temp++;
        if (n % temp == 0)
        {
            vi.push_back(temp);
        }
        else
        {
            continue;
        }
    }
    cout << vi.size() << endl;
    for (int j = 0; j < vi.size(); j++)
    {
        cout << vi[j] << " ";
    }

    return 0;
}
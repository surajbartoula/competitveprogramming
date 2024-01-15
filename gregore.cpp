#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    string b;
    cin >> b;

    string a;
    cin >> a;

    int cnt = 0;
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {

            if (b[i - 1] == '1' && m[i - 1] == 0)
            {
                cnt++;
                m[i - 1] = 1;
            }
            else if (b[i] == '0')
            {
                cnt++;
            }
            else if (b[i + 1] == '1' && m[i + 1] == 0)
            {
                cnt++;
                m[i + 1] = 1;
            }
        }

    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
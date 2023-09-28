#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        vector<int> k(m);
        for (int i = 0; i < m; i++)
        {
            cin >> k[i];
        }
        int num = 1;
        int total = 0;
        for (int i = 0; i < m; i++)
        {
            if (k[i] == num)
                num++;
            else
                total++;
        }

        cout << (total + n - 1) / n << endl;
    }
    return 0;
}

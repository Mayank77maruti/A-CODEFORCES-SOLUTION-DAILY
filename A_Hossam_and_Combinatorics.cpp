#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
using namespace std;

vector<ll> factorial;

void calculateFactorial(int n)
{
    factorial.resize(n + 1);
    factorial[0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
}

ll power(ll x, ll y)
{
    ll res = 1;
    x = x % MOD;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}

ll modularInverse(ll n)
{
    return power(n, MOD - 2);
}

int findCounts(vector<int> &arr, int p)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    return hash[p];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    calculateFactorial(200000);

    while (t--)
    {
        ll n;
        cin >> n;
        vi ar(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int minele = *min_element(ar.begin(), ar.end());
        int maxele = *max_element(ar.begin(), ar.end());

        int minelefreq = findCounts(ar, minele);
        int maxelefreq = findCounts(ar, maxele);

        int totalfreq = minelefreq + maxelefreq;
        int totalfreq1 = totalfreq - 2;

        ll p;
        if (totalfreq1 == 0)
            p = factorial[totalfreq];
        else
            p = (factorial[totalfreq] * modularInverse(factorial[totalfreq1])) % MOD;

        if (minelefreq > 1)
            p = (p - minelefreq + MOD) % MOD;
        else if (maxelefreq > 1)
            p = (p - maxelefreq + MOD) % MOD;

        cout << p << endl;
    }
    return 0;
}

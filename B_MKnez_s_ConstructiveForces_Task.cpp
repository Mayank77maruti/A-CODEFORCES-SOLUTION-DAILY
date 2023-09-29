// SHREE RAM JANKI REHTE HAIN MERE SHEENE MAIN
// SHRI MAHABALI HANUMAN KI JAI
// LETS CODE FAST SO THAT WE CAN CODE AGAIN
#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define make make_pair
#define vi vector<int>
#define pb push_back
#define ltransfr(str) transform(str.begin(), str.end(), str.begin(), ::tolower)
#define utransfr(str) transform(str.begin(), str.end(), str.begin(), ::toupper)
#define ct(x) cout << x
#define cn(x) cin >> x
#define tostring to_string()
#define sortarr sort(arr, arr + n)
#define sortv sort(v.begin(), v.end())
#define sortvgreater sort(v.begin(), v.end(), greater<int>())
#define forl(i, j, k) for (int i = j; i < k; i += 1)
#define forlr(i, j, k) for (int i = j; i >= k; i -= 1)
#define vin(x, v)     \
    for (auto &x : v) \
        cin >> x;
#define MOD 1000000007
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
        int n;
        cin >> n;
        if (n == 3)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if (n % 2 == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                        cout << 1 << " ";
                    else
                        cout << -1 << " ";
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                        cout << n / 2 - 1 << " ";
                    else
                        cout << -(n + 1) / 2 + 1 << " ";
                }
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define abc "abcdefghijklmnopqrstuvwxyz"
#define asort(a) sort(a.begin(), a.end())
#define gsort(a) sort(a.begin(), a.end(), greater<int>())
#define issort(a) is_sorted(a.begin(), a.end())
#define areverse(a) reverse(a.begin(), a.end())
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// default define end
void solve()
{
    int n, x, ans;
    cin >> n >> x;
    vector<int> d_array;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d_array.push_back(x);
    }
    ans=d_array[0];
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, d_array[i] - d_array[i - 1]);
    }
    ans = max(ans, (x - d_array[n - 1])*2);
    cout << ans << endl;
}
int main()
{
    Faster;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
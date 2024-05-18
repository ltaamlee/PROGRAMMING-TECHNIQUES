#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> dp(n);
    // dp[i] : thu lao lon nhat neu xet (i + 1) cong viec dau
    vector<int> s(n), e(n), v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> e[i] >> v[i];
    }
    vector<int> order(n); // thu tu sau khi sort
    for (int i = 0; i < n; i++) order[i] = i;
    sort(order.begin(), order.end(), [&](int i, int j){return e[i] < e[j];});
    dp[0] = v[order[0]];
    for (int i = 1; i < n; i++)
    {
        dp[i] = v[order[i]];
        for (int j = 0; j < i; j++)
        {
            if (s[order[i]] >= e[order[j]])
            {
                dp[i] = max(dp[i], dp[j] + v[order[i]]);
            }
        }
        dp[i] = max(dp[i], dp[i - 1]);
    }
    cout << dp[n - 1];
    return 0;
}

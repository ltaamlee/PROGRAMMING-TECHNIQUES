câu 4
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
       vector<int> a(n), b(m);
       for (int i = 0; i < n; i++) cin >> a[i];
       for (int i = 0; i < m; i++) cin >> b[i];
       vector<int> c(n + m);
       merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
       cout << c[0] << ' ';
       for (int i = 1; i < n + m; i++)
       {
           if (c[i] != c[i - 1]) cout << c[i] << ' ';    
       }
    return 0;
}

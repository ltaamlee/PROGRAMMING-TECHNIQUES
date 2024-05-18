Câu 3 : 
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
       vector<string> a(n);
       for (int i = 0; i < n; i++) cin >> a[i];
       int dx[4] = {0, 0, -1, 1};
       int dy[4] = {-1, 1, 0, 0};
       pair<int, int> posA, posB;
       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < m; j++)
           {
               if (a[i][j] == 'A') posA = {i, j};
               else if (a[i][j] == 'B') posB = {i, j};
           }
       }
       vector<vector<int>> d(n, vector<int>(m, -1));
       d[posA.first][posA.second] = 0;
       queue<pair<int, int>> q;
       q.push(posA);
       while (!q.empty())
       {
           pair<int, int> cur = q.front();
           q.pop();
           for (int k = 0; k < 4; k++)
           {
               int x = dx[k] + cur.first;
               int y = dy[k] + cur.second;
               if (min({x, y, n - x - 1, m - y - 1}) >= 0 && a[x][y] != '#' && d[x][y] == -1)
               {
                   d[x][y] = d[cur.first][cur.second] + 1;
                   q.push({x, y});
               }
           }
       }
       cout << d[posB.first][posB.second];
    return 0;
}

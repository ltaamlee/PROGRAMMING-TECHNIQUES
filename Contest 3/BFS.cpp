#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
	int n,m; cin>>n>>m;
	vector<string> grid(n);
	for (int i=0; i<n; ++i){
		cin>>grid[i];
	}
	vector<vector<int>> d(n, vector<int> (m,-1));
	queue<pair<int, int>> q;
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			if (grid[i][j]=='2'){
				q.push(make_pair(i,j));
				d[i][j]=0;
			}
		}
	}
	int dx[4]={0,0,-1,1};
	int dy[4]={-1,1,0,0};
	while (!q.empty()){
		pair<int,int> cur=q.front();
		int x=cur.first, y=cur.second;
		q.pop();
		for (int k=0; k<4; ++k){
			int u=x+dx[k];
			int v=y+dy[k];
			if (u>=0 && u<n && v>=0 && v<m && grid[u][v]!='0'&&d[u][v]==-1){
				d[u][v]=d[x][y]+1;
				q.push(make_pair(u,v));
			}
		}
	} 
	int ans=0;
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			if (grid[i][j]!='0'){
				if (d[i][j]==-1){
					cout<<-1;
					return 0;
				}
				ans=max(ans,d[i][j]);
			}
		}
	}
	cout<<ans;
	return 0;
}

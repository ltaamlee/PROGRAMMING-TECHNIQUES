#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<string> grid(n);
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			cin>>grid[i][j];
		}
	}
	queue<pair<int,int>> q;
	vector<vector<int>> d(n,vector<int>(m,-1));
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
	while(!q.empty()){
		pair<int,int> cur=q.front();
		q.pop();
		int x=cur.first, y=cur.second;
		for (int k=0; k<4; ++k){
			int r=x+dx[k];
			int c=y+dy[k];
			if (r>=0 && r<n && c>=0 && c<m &&grid[r][c]!='0' &&d[r][c]==-1){
				d[r][c]=d[x][y]+1;
				q.push(make_pair(r,c));
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
			}
			ans=max(ans,d[i][j]);
		}
	}
	cout<<ans;
	return 0;
}

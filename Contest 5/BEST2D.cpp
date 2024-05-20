#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int m,n; cin>>m>>n;
	vector <vector<int> > a(m,vector<int> (n));
	int ans=0,sum=0;
	for (int i=0; i<m; ++i){
		for (int j=0; j<n; ++j){
			cin>>a[i][j];
			ans=max(ans,a[i][j]);
		}
		sum+=ans;
		ans=0;
	}
	cout<<sum;
	return 0;
}

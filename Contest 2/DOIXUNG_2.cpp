#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin>>n;
	cin.ignore();
	string s; cin>>s;
	string t=s;
	reverse(t.begin(),t.end());
	vector<vector<int> > dp(n+1, vector <int>(n+1,0));
	for (int i=1; i<=n; ++i){
		for (int j=1; j<=n; ++j){
			if (s[i-1]==t[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else 
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout<<n-dp[n][n];
	return 0;
}

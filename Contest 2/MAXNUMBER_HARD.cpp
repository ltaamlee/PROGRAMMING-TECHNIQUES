#include <bits/stdc++.h>
using namespace std;
string MAX(string a, string b){
	if (a.size()==b.size()) return a>b?a:b;
	return a.size()>b.size()?a:b;
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	string s,t;
	cin>>s>>t;
	int n=s.size(), m=t.size();
	s=' '+s;
	t=' '+t;
	vector<vector<string>> dp(n+1,vector<string>(m+1,""));
	for (int i=1; i<=n; ++i) for (int j=1; j<=m; ++j){
		if (s[i]==t[j]){
			dp[i][j]=dp[i-1][j-1];
			if (dp[i-1][j-1]=="0") dp[i][j][0]=s[i];
			else{
				dp[i][j]=dp[i-1][j-1];
				dp[i][j]+=s[i];
			}
		}
		dp[i][j]=MAX(dp[i][j],MAX(dp[i-1][j],dp[i][j-1]));
	}
	if (dp[n][m].empty()) cout<<-1;
	else cout<<dp[n][m];
	return 0;
}

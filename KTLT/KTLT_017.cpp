#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	string s,t;
	cin>>s>>t;
	long long n=s.size(), m=t.size();
	vector<vector<int>> dp(n+1,vector<int> (m+1,0));
	for (int i=1; i<=n; ++i){
		for (int j=1; j<=m; ++j){
			if (s[i-1]==t[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout<<dp[n][m];
	return 0;
}
/*
AdksHKoiGAdksHKoiG
ADKSHKOIGADKSHKOIG
*/

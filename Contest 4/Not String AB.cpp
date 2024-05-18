#include <bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;
int dp[100001][3];
int main() {
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n; cin>>n;
	if (n==0) {
		cout<<1;
		return 0;
	}
	dp[1][0]=dp[1][1]=dp[1][2]=1;
	for (int i=2; i<=n; ++i){
		dp[i][0]= dp[i][2] =((dp[i-1][0] + dp[i-1][1])%MOD + dp[i-1][2])%MOD;
		dp[i][1]= (dp[i-1][1] + dp[i-1][2])%MOD;
	}
	cout<<((dp[n][0]+dp[n][1])%MOD + dp[n][2])%MOD;
	return 0; 
}

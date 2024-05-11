#include <bits/stdc++.h>
#define nmax 1000
using namespace std;
string dp[101][101]={"0"};
string ADD(string a, string b){
	int n = max(a.size(), b.size());
	while (a.size()<n) a.insert(0, "0");
	while (b.size()<n) b.insert(0, "0");
	int res, tmp; res = 0;
	string c;
	for (int i = n-1; i >= 0; i--){
		tmp = (a[i]-'0')+(b[i]-'0')+res;
		res = tmp/10;
		c += char(tmp%10+'0');
	}
	if (res!=0) c += char(res+'0');
	reverse(c.begin(), c.end());
	return c;
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n, k; cin>>n>>k;
	dp[1][0]="1";
	dp[1][1]="1";
	for (int i=2; i<=n; ++i){
		for (int j=0; j<=i; ++j){
			if (j==0||j==i) dp[i][j]="1";
			else dp[i][j]=ADD(dp[i-1][j-1],dp[i-1][j]);
		}
	}
	cout<<dp[n][k];
	return 0;
}

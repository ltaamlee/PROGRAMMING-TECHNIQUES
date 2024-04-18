#include <bits/stdc++.h>
using namespace std;
const int nmax = 1001;
int dp[nmax][nmax];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin>>n;
	cin.ignore();
	string s; cin>>s;
	string t=s;
	reverse(t.begin(),t.end());
	for (int i=0; i<n; ++i){
		for (int j=0; j<n; ++j){
			if (s[i]==t[j]){
				dp[i+1][j+1]=dp[i][j]+1;
			}
			else 
				dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
		}
	}
	cout<<n-dp[n][n];
	return 0;
}

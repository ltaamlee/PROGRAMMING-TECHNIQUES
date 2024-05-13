#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	long long n,res=0; cin>>n;
	vector <long long> a(n);
	for (auto &i:a) cin>>i;
	vector <long long> dp(n+1);
	for (int i=0; i<n; ++i){
		dp[i]=0;
		for (int j=i-1; j>=0; --j){
			if (a[i]>a[j]){
				dp[i]=max(dp[i],dp[j]);
			}
		}
		dp[i]++;
		res=max(res,dp[i]);
	}
	cout<<res;
	return 0;
}

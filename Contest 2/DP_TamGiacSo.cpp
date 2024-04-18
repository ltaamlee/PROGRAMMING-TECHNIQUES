#include <bits/stdc++.h>
#define nmax 100
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a[nmax][nmax], dp[nmax][nmax];
	long t,n, ans; 
	cin>>t;
	while (t--){
		cin>>n;
		for (int i=1; i<=n; ++i){
			for (int j=1; j<=i; ++j){
				cin>>a[i][j];
			}
		}
		dp[1][1]=a[1][1];
		for (int i=2; i<=n; ++i){
			for (int j=1; j<=i; ++j){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];
			}
		}
		int m=dp[n][1];
		for (int j=2; j<=n; ++j)
			if (dp[n][j]>m) m=dp[n][j];
		cout<<m<<"\n";
	}
	return 0;
}

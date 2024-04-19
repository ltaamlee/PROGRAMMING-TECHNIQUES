#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s1, s2;
	getline(cin,s1);
	getline(cin,s2);
	int n=s1.size(), m=s2.size();
	cout<<s1<<"\n"<<s2<<"\n";
	vector<vector<int> > dp(n+1,vector<int>(m+1,0));
	for (int i=1; i<=n; ++i){
		for (int j=1; j<=m; ++j){
			if (s1[i-1]==s2[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	string res="";
	int i=n, j=m;
	while(i>0 && j>0){
		if (s1[i-1]==s2[j-1]){
			res+=s1[i-1];
			i--;
			j--;
		}
		else if (dp[i-1][j]>dp[i][j-1]) i--;
		else j--;
	}
	reverse(res.begin(),res.end());
	cout<<res;
	return 0;
}

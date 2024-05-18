#include <bits/stdc++.h>
using namespace std;
string DAYTONA(vector<long long> &a, int n, int k, map <long long, long long> &mp){
	if (mp[k]>=1) return "YES";
	return "NO";
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int t; cin>>t;
	while (t--){
		int n,k; cin>>n>>k;
		vector<long long> a(n);
		map <long long, long long> mp;
		for (auto &i:a){
			cin>>i;
			mp[i]++;
		}
		cout<<DAYTONA(a,n,k,mp)<<"\n";
	}
	return 0;
}

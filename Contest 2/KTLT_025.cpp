#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n,k; 
	cin>>n>>k;
	vector <long long> v(n);
	long long ans=0;
	for (auto &i:v){
		cin>>i;
	}
	map<int, int> mp;
	for (int l=0, r=0; r<n; ++r){
		mp[v[r]]++;
		while(mp.size()>k){
			mp[v[l]]--;
			if (mp[v[l]]==0) mp.erase(v[l]);
			l++;
		}
		ans+=r-l+1;
	}
	cout<<ans;
	return 0;
}

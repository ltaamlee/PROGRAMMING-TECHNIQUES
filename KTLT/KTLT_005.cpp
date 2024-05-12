#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n,m,k; cin>>n>>m>>k;
	vector <long long> a(n);
	for (auto &i:a){
		cin>>i;
	}
	sort(a.begin(),a.end());
	multiset<int> s;
	for (int i=0; i<m; ++i){
		int x; cin>>x;
		s.insert(x);
	}
	int ans=0;
	for (int i=0; i<n; ++i){
		//[a[i]-k,a[i]+k]
		auto it = s.lower_bound(a[i]-k);
		if (it==s.end() || *it>a[i]+k) continue;
		s.erase(it);
		ans++;
	}
	cout<<ans;
	return 0;
}
/*
4 3 5
60 45 80 60
30 60 75
*/

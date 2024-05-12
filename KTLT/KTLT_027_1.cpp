#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n,m; cin>>n>>m;
	vector <long long> a(n);
	vector <long long> b(m);
	vector <long long> c(n+m);
	for (auto &i:a) cin>>i;
	for (auto &i:b) cin>>i;
	merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());
	cout<<c[0]<<" ";
	for (int i=1; i<n+m; ++i){
		if (c[i]!=c[i-1]) cout<<c[i]<<" ";
	}
	return 0;
}

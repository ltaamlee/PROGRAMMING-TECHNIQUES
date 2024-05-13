#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n,ans=0; cin>>n;
	vector <long long> a(n),b(n);
	for (auto &i:a) cin>>i;
	for (auto &i:b) cin>>i;
	sort(a.begin(),a.end());
	sort(b.rbegin(),b.rend());
	for (int i=0; i<n; ++i){
		ans+=(long long)a[i]*b[i];
	}
	cout<<ans;
	return 0;
}

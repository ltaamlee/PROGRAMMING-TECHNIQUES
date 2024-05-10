#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n; cin>>n;
	long long s=0,ans=0;
	vector<long long> v(n);
	for (auto &i:v) {
		cin>>i;
	}
	sort(v.begin(), v.end());
	long long avg=v[n/2];
	for (auto i:v){
		ans+=abs(i-avg);
	}
	cout<<ans;
	return 0;
}

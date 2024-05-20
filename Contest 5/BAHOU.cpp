#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n,m,k; cin>>n>>m>>k;
	vector <int> a(n+1);
	for (int i=1; i<=n; ++i){
		cin>>a[i];
	}
	int ans=INT_MAX;
	for (int i=1; i<=n; ++i){
		if (a[i]==0) continue;
		if (k-a[i]>=0){
			ans=min(ans,(abs(m-i))*10);
		}
	}
	cout<<ans;
	return 0;
}

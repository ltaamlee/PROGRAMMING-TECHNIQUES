#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n; cin>>n;
	while(n--){
		string x,y; cin>>x>>y;
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		if (x==y) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

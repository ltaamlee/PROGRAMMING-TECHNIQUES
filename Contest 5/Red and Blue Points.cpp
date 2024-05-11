#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n,ans=LONG_MAX; cin>>n;
	vector <pair<int,int>> p;
	for (int i=0; i<2*n; ++i){
		int x; cin>>x;
		p.pb({x,i/n});
	}
	sort(p.begin(),p.end());
	for (int i=0; i<2*n-1; ++i){
		if (p[i].second!=p[i+1].second){
			ans=min(ans,(p[i+1].first-p[i].first)*1LL);
		}
	}
	cout<<ans;
	return 0;
}
/*
2
1 7
10 5
*/

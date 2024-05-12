#include <bits/stdc++.h>
#define nmax 10005
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n,q; cin>>n>>q;
	vector <long long> a(n),s(n+1);
	s[0]=0;
	for (int i=0; i<n; ++i){
		cin>>a[i];
		s[i+1]=s[i]+a[i];
	}
	while(q--){
		int x; cin>>x;
		cout<<s[x]<<" ";
	}
	return 0;
}
/*
5 3
3 1 -4 5 -2
3 2 5
*/

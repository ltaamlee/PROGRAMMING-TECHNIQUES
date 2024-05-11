#include <bits/stdc++.h>
#define nmax 10005
using namespace std;
bool BINARY_SEARCH(int l, int r, vector<long long> &a, int x){
	int mid=0;
	bool check=true;
	do{
		mid=(l+r)/2;
		if (x==a[mid])
			return check;
		else
		if (x<a[mid])
			r=mid-1;
		else
			l=mid+1;
	}
	while(l<=r);
	check=false;
	return check;
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n,q; cin>>n>>q;
	vector <long long> a(n);
	for (auto &i:a) cin>>i;
	sort(a.begin(),a.end());
	while(q--){
		int x; cin>>x;
		if (BINARY_SEARCH(0,n-1,a,x)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
//binary_search(begin end x)
/*
5 3
3 1 -4 5 -2
3 2 5
*/

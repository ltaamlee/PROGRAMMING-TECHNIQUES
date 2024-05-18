#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n,k; cin>>n>>k;
	vector<long long> a(n);
	for (auto &i:a) cin>>i;
	string order="";
	int temp=n-k;
	while (k--) order=order+"1";
	while(temp--) order=order+"0";
	long long ans=0,res=0;
	do{
		for (int i=0; i<n; ++i) if (order[i]=='1'){
			ans=__gcd(ans,a[i]);
		}
		res=max(res,ans);
		ans=0;
	}
	while (prev_permutation(order.begin(),order.end()));
	cout<<res;
	return 0;
}
/*
6 3
1 2 5 20 2 15
*/

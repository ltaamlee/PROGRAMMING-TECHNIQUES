#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n,s=0,res=0; cin>>n;
	vector <long long> a(n);
	for (auto &i:a){
		cin>>i;
	}
	if (*max_element(a.begin(),a.end())<=0){
		cout<<*max_element(a.begin(),a.end());
		return 0;
	}
	for (int i=0; i<n; ++i){
		s+=a[i];
		res=max(res,s);
		if (s<0) s=0;
	}
	cout<<res;
	return 0;
}
/*
8
-1 3 -2 5 3 -5 2 2
*/

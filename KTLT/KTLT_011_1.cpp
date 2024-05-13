#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n,x,cnt=0,s=0; cin>>n>>x;
	vector <long long> a(n);
	for (auto &i:a) cin>>i;
	for (int l=0,r=0; r<n; ++r){
		s+=a[r];
		while (s>x)
			s-=a[l++];
		if (s==x) cnt++;
	}
	cout<<cnt;
	return 0;
}

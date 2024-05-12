#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	const long long nmax=1e5+7;
	long long n; cin>>n;
	long long a[nmax],s=0;
	for (int i=1; i<=n; ++i){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<long long>());
	for (int i=1; i<=n; ++i){
		if (i%3!=0) s+=a[i];
	}
	cout<<s;
	return 0;
}

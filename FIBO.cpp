#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	const long long nmax=1e9+7;
	long long n; cin>>n;
	vector <long long> f(n+1);
	f[0]=0; f[1]=1;
	for (int i=2; i<=n; ++i){
		f[i]= ((long long) f[i-1]+f[i-2])%nmax;
	}
	cout<<f[n];
	return 0;
}

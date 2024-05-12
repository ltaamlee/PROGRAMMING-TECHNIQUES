#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	const long long nmax=1e5+7;
	long long n; cin>>n;
	if (n%9!=0) cout<<n%9;
	for (int i=1; i<=n/9; ++i) cout<<9;
	return 0;
}
/*
So lon nhat co N chu so < so nho nhat co n+1 chu so
*/

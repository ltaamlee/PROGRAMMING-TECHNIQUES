#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n, cnt=1; cin>>n;
	vector <int> a(n);
	for (auto &i:a) cin>>i;
	for (int i=0; i<n-1; ++i){
		if (a[i]!=a[i+1]) cnt++;
	}
	cout<<cnt;
	return 0;
}
/*
6
10
10
10
01
10
10
*/

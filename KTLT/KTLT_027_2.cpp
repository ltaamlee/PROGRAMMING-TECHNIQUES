#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n,m; cin>>n>>m;
	vector <long long> a(n);
	vector <long long> b(m);
	for (auto &i:a) cin>>i;
	for (auto &i:b) cin>>i;
	set <long long> st;
	for (auto i:a) st.insert(i);
	for (auto i:b) st.insert(i);
	for (auto i:st)
		cout<<i<<" ";
	return 0;
}

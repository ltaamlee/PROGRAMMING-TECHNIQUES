#include <bits/stdc++.h>
#define nmax 1000
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n, m, k; cin>>n>>m;
	vector <vector<long long>> a(n,vector<long long>(m));
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			cin>>a[i][j];
		}
	}
	cin>>k;
	vector <long long> cnt (n,0);
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			cnt[i]+=a[i][j];
		}
	}
	vector<long long> order (n);
	for (int i=0; i<n; ++i) order[i]=i;
	sort(order.begin(),order.end(),[&](int a, int b){
		return (cnt[a]<cnt[b] || cnt[a]==cnt[b] &&a<b);
	});
	cout<<order[k-1]+1;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
    vector <long long> a(n);
    for (auto &i:a) cin>>i;
	long long mi=0, ma=0;
	for (int i=0; i<n; ++i){
   		ma=max(ma,a[i]-mi);
   		mi=min(mi,a[i]);
	}
	cout<<ma;
    return 0;
}

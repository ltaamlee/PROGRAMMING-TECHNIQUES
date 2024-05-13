#include <bits/stdc++.h>
using namespace std;
long long Binary_search(vector<long long>& a, int l, int r, int x) {
    while (l<r) {
        int mid=(l+r)/2;
        if (a[mid]>=x)
            r=mid;
        else
            l=mid+1;
    }
    return r;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	long long n,res=0; cin>>n;
	vector <long long> a(n);
	for (auto &i:a) cin>>i;
	vector <long long> dp(n,0);
	for (int i=0; i<n; ++i){
        int pos=Binary_search(dp,0,res,a[i]);
        dp[pos]=a[i];
        if (pos==res) ++res;
    }
    cout<<res;
	return 0;
}

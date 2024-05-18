#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n; cin>>n;
	vector <long long> a(n),dp(n);
	for (auto &i:a) cin>>i;
    for (int i=0; i<n; ++i) dp[i]=a[i];
    for (int i=1; i<n; ++i){
        for (int j=0; j<i; ++j){
            if (a[i]<=a[j] && dp[i]<dp[j]+a[i]){
                dp[i]=dp[j]+a[i];
            }
        }
    }
    cout<<*max_element(dp.begin(),dp.end());
    return 0;
}

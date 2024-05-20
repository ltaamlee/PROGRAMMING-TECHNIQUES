#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    if (x<2) return false;
    for (int i=2; i*i<=x; ++i){
        if (x%i==0) return false;
    }
    return true;
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n; cin>>n;
	vector<long long> a(n);
	for (auto&i:a) cin>>i;
	long long ans=0;
    for (auto i:a) if (isPrime(i)) ans++;
    cout<<ans;
	return 0;
}

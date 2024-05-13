#include <bits/stdc++.h>
using namespace std;
vector<bool> isPrime(1000001,true);
void sieve(){
	isPrime[0]=isPrime[1]=false;
	for (int i=2; i*i<=1000000; ++i){
		if (isPrime[i]){
			for (int j=i*i; j<=1000000; j+=i){
				isPrime[j]=false;
			}
		}
	}
}
int solve(vector<long long> &a){
	sieve();
	int n=a.size();
	vector<bool> prime(n);
	for (int i=0; i<n; ++i) prime[i]=isPrime[a[i]];
	set<pair<int,int>>s;
	for (int i=0; i<n; ++i){
		if (!prime[i]) continue;
		auto it=s.lower_bound(make_pair(a[i],i));
		if (it!=s.end()) s.erase(it);
		s.insert(make_pair(a[i],i));
	}
	return (int)s.size();
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n; cin>>n;
	vector<long long> a(n);
	for (auto&i:a) cin>>i;
	cout<<solve(a);
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x){
	if (x<2) return false;
	for (int i=2; i*i<=x; ++i){
		if (x%i==0) return false;
	}
	return true;
}
/* sieve
*/
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n,cnt=0; cin>>n;
	vector <long long> a(n);
	for (auto &i:a) cin>>i;
	for (auto i:a){
		if (isPrime(i)) cnt++;
	}
	cout<<cnt;
	return 0;
}

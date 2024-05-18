#include <bits/stdc++.h>
#define nmax 1000
using namespace std;
int bit[25];
long long t[25];
void ans(int n, int m){
	long long sum=0;
    for (int i=1; i<=n; i++){
    	sum+=bit[i]*t[i];
	}
	if (sum!=m) return;
	for (int i=1; i<=n; ++i){
		if (bit[i]==0) continue;
		cout<<t[i]<<" ";
	}
	exit(0);
}
void gen_bina(int n, int k, int m){
    for (int i = 0; i < 2; i++){
        bit[k] = i;
        if (n == k) ans(n,m);
        else gen_bina(n, k+1,m);
    }
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n, m;cin>>n>>m;
	for (int i=1; i<=n; ++i) cin>>t[i];
	gen_bina(n,1,m);
	cout<<-1;
	return 0;
}

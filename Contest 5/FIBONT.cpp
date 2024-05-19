#include <bits/stdc++.h>
using namespace std;
#define nmax 10000
string ADD(string a, string b){
	int n=max(a.size(),b.size());
	while (a.size()<n) a.insert(0,"0");
	while (b.size()<n) b.insert(0,"0");
	int res,tmp; res=0;
	string c;
	for (int i=n-1; i>=0; i--){
		tmp=(a[i]-'0')+(b[i]-'0')+res;
		res=tmp/10;
		c+=char(tmp%10+'0');
	}
	if (res!=0) c+=char(res+'0');
	reverse(c.begin(),c.end());
	return c;
}
int main(){
    int t; cin>>t;
    vector <string> f(nmax+1);
    f[0]=f[1]="1";
    for (int i=2; i<=nmax; ++i){
        f[i]=ADD(f[i-1],f[i-2]);
    }
    while(t--){
        long long n; cin>>n;
        cout<<f[n]<<"\n";
    }
    return 0;
}

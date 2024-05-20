#include <bits/stdc++.h>
using namespace std;
string cv(__int128_t ans){
	string s="";
	while(ans){
		s+=(ans%10 +'0');
		ans/=10;
	}
	reverse(s.begin(),s.end());
	return s;
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n; cin>>n;
	__int128_t ans=(__int128_t) n;
	__int128_t res=(ans*(ans+1)*(ans+2))/6;
	string s=cv(res);
	cout<<s;
	return 0;
}

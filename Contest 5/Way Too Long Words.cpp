#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n; cin>>n;
	cin.ignore();
	string s; getline(cin,s);
	if (n<=10) cout<<s;
	else{
		cout<<s[0];
		cout<<n-2;
		cout<<s[n-1];
	}
	return 0;
}

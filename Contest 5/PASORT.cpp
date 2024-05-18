#include <bits/stdc++.h>
using namespace std;
string PARITY_SORT(vector<long long> &a, int n){
	vector <long long> b;
	b=a;
	sort(a.begin(),a.end());
	bool check=true;
	for (int i=0; i<n; ++i){
		if (a[i]&1 && !(b[i]&1)){
	 		check=false;
	 		break;
		}
		else 
		if (!(a[i]&1) && (b[i]&1)){
	 		check=false;
	 		break;
		}
	}
	if (check) return "YES";
	return "NO";
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int t; cin>>t;
	while (t--){
		int n; cin>>n;
		vector<long long> a(n);
		for (auto &i:a) cin>>i;
		cout<<PARITY_SORT(a,n)<<"\n";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
string LCP(vector <string> &v){
	if (v.empty()) return "";
	for (int i=0; i<v[0].length(); ++i){
		for (int j=1; j<v.size(); ++j){
			if (i==v[j].length()||v[j][i]!=v[0][i]){
				return v[0].substr(0,i);
			}
		}
	}
	return v[0];
}
int main() {
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n; cin>>n;
	vector<string> v(n);
	for (auto &i:v) cin>>i;
	cout<<LCP(v); 
}

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	string s; getline(cin,s);
	vector <char> v;
	int cnt=0;
	for (int i=0; i<s.size(); ++i){
		if (isdigit(s[i])){
			v.push_back(s[i]);
		}
	}
	sort(v.begin(),v.end());
	for (auto i:v){
		cnt++;
		cout<<i;
		if (cnt<v.size()) cout<<"+";
	}
	return 0;
}

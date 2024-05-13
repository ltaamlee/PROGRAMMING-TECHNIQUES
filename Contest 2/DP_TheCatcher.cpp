#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int a;
	while (cin>>a && a!=-1){
		vector<int> v={-a};
		while (cin>>a && a!=-1){
			v.push_back(-a);
		}
		set<pair<int,int>> s;
		for (int i=0; i<v.size(); ++i){
			auto it=s.lower_bound(make_pair(v[i],i));
			if (it!=s.end()) s.erase(it);
			s.insert(make_pair(v[i],i));
		}
		cout<<s.size()<<"\n";
	}
	return 0;
}

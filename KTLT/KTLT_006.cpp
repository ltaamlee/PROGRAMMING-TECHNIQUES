#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n,x; cin>>n>>x;
	multiset<int> s;
	for (int i=0; i<n; ++i){
		int a; cin>>a;
		s.insert(a);
	}
	int ans=0;
	while(s.size()>1){
		ans++;
		int MAX=*s.rbegin();
		s.erase(s.find(MAX)); //tim phan tu lon nhat <= x-MAX -> 
		auto it=s.upper_bound(x-MAX);
		if (it==s.begin()) continue;
		it--;
		s.erase(it);
	}
	cout<<ans+s.size();
	return 0;
}

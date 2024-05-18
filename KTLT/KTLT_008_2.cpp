#include <bits/stdc++.h>
using namespace std;
long long n, cnt, res;
map<long long,int> point;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	cin>>n;
	for (long i=1; i<=n; ++i){
		long long inp,out;
		cin>>inp>>out;
		point[inp]++;
		point[out]--;
	}
	for (auto i:point){
		cnt+=i.second;
		res=max(cnt,res);
	}
	cout<<res;
	return 0;
}
/*
3
5 8
2 4
3 9
*/

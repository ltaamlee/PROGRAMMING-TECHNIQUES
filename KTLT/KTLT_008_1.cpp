#include <bits/stdc++.h>
using namespace std;
long long n, cnt, res;
vector <pair<long long,int>> point;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	cin>>n;
	for (long i=1; i<=n; ++i){
		long long inp,out;
		cin>>inp>>out;
		point.push_back({inp,1});
		point.push_back({out,-1});
	}
	sort(point.begin(),point.end());
	for (long i=0; i<point.size(); ++i){
		if (point[i].second==1){
			res=max(res,++cnt);
		}
		else cnt--;
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

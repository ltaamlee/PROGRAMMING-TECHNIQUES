#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n; cin>>n;
	int r=0,c=0,mx=0;
	vector<vector<int>> a(n,vector<int> (n));
	for (int i=0; i<n; ++i){
		for (int j=0; j<n; ++j){
			cin>>a[i][j];
		}
	}
	for (int i=1; i+1<n; ++i){
		for (int j=1; j+1<n; ++j){
			map<int,int> mp;
			for (int dx=-1; dx<=1; ++dx){
				for (int dy=-1; dy<=1; ++dy){
					if (dx==0 && dy==0) continue;
					int k=a[i+dx][j+dy];
					for (int p=2; p*p<=k; ++p){
						while(k%p==0){
							mp[p]++;
							k/=p;
						}
					}
					if (k>1) mp[k]++;
				}
			}
			long long f=1;
			for (auto x:mp) f*=x.second+1;
			if (f>mx) mx=f; r=i; c=j; 
		}
	}
	cout<<r+1<<" "<<c+1;
	return 0;
}

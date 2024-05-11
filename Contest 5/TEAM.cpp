#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n; cin>>n;
	int a[n+1][n+1];
	for (int i=0; i<n; ++i){
		for (int j=0; j<3; ++j){
			cin>>a[i][j];
		}
	}
	int cnt=0;
	for (int i=0; i<n; ++i){
		int ans=0;
		for (int j=0; j<3; ++j){
			if (a[i][j]==1){
				ans++;
			}
		}
		if (ans>=2) cnt++;
	}
	cout<<cnt;
	return 0;
}

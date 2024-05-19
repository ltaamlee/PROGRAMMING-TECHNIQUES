#include <bits/stdc++.h>
using namespace std;
int dx[8]={-2,-2,-1,1,2,2,1,-1};  
int dy[8]={1,-1,-2,-2,-1,1,2,2};
int CHECK(int i, int j){
	int n=8;
	return (i>=0 && i<n && j>=0 && j<n);
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	for (int i=0; i<8; ++i){
		int u=x1+dx[i];
		int v=y1+dy[i];
		if (CHECK(u,v) && u==x2 && v==y2){
			cout<<i+1;
			return 0;
		}
	}
	cout<<0;
	return 0;
}

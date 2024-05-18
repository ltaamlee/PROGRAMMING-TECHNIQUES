#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n,point; cin>>n>>point;
	int min(point), max(point), cnt(0);
	n=n-1;
	while(n--){
		cin>>point;
		if (min>point){
			min=point;
			cnt++;
		}
		if (max<point){
			max=point;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

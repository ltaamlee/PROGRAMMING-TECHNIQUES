#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int n; cin>>n;
	cin.ignore();
	vector <long long> a(n);
	for (auto &i:a) cin>>i;
	sort(a.begin(),a.end());
	cout<<min((a[0]*a[1]),min((a[n-1]*a[n-2]),(a[0]*a[n-1])));
	return 0;
}
/*
5
7 8 2 9 3
*/

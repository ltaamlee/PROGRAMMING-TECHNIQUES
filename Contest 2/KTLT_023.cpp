#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n,s; 
	cin>>n>>s;
	vector <long long> v(n);
	long long ans=0, sum=0;
	for (auto &i:v){
		cin>>i;
	}
	for (int l=0, r=0; r<n; ++r){
		sum+=v[r];
		while(sum>s){
			sum-=v[l];
			l++;
		}
		ans+=r-l+1;
	}
	cout<<ans;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
void Try(vector <int> &a, int n, int k, int cursum, int curid, int &msum){
	if (curid==n){
		if (cursum%k==0){
			msum=max(msum,cursum);
		}
		return;
	}
	Try(a,n,k,cursum,curid+1,msum);
	Try(a,n,k,cursum+a[curid],curid+1,msum);	
}
int res(vector <int> &a, int n, int k){
	int ans=0;
	Try(a,n,k,0,0,ans);
	return ans;
}
int main(){
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    int n,k; cin>>n>>k;
    vector <int> a(n);
    int sum=0;
    for (auto &i:a){
    	cin>>i;
    	sum+=i;
    }
    cout<<res(a,n,k);
    return 0;
}
/*
5 7
33 54 51 48 15 
201
*/

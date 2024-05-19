#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    vector <int> a(n),b(m),c(n+m);
    for (auto &i:a) cin>>i;
    for (auto &i:b) cin>>i;
    long long ans=0; 
    merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());
    sort(c.begin(),c.end());
    for (int i=1; i<n+m; ++i){
        if (c[i]<0) continue;
        if (c[i]==c[i-1])
            ans+=c[i];
    }
    cout<<ans;
    return 0;
}

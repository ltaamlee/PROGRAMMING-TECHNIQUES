#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin>>n>>q;
    vector<long long> a(n);
    for (auto &i:a) cin>>i;
    sort(a.begin(),a.end());
    while(q--){    
        long long x; cin>>x;
        (binary_search(a.begin(),a.end(),x))?(cout<<"YES"<<"\n"):(cout<<"NO"<<"\n");
    }
    return 0;
}

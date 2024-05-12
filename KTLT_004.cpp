#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    long long n; cin>>n;
    set<int> s;
    for (int i=1; i<=n; ++i){
        long long x; cin>>x;
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}

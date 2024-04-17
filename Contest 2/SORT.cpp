#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    if (a.size()==b.size()) return a<b;
    return a.size()<b.size();
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    vector <string> v(n);
    for (auto &i:v) cin>>i;
    sort(v.begin(),v.end(),cmp);
    for (auto &i:v) cout<<i<<"\n";
    return 0;
}

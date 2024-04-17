#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    for (int i=1; i*i<=n; ++i){
        if (n%i!=0) continue;
        int f=i;
        int s=n/i;
        if ((f+s)%2==1) continue;
        int m=(f+s)/2;
        int k=m-i;
        cout<<m<<" "<<k;
        return 0;
    }
    cout<<-1;
    return 0;
}

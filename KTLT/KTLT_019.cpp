#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		if (a>b) swap(a,b);
		if (b>c) swap(b,c);
		if (a>c) swap(a,c);
		cout<<(a+b==c||a*b==c?"Possible":"Impossible")<<"\n";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int a,b;
	cin>>a>>b;
	cout<<(b-a%b)%b;
	return 0;
}

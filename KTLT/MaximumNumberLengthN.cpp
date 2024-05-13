#include <bits/stdc++.h>
using namespace std;
int n,s; 
string MAX_NUM(int n, int s){
	string res="";
	while(n--){
		if (s>0){
			res+=to_string(min(9,s));
			s-=min(9,s);
		}
		else res+='0';
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	cin>>n>>s;
	if (s==0){
		if (n==1){
			cout<<0;
			return 0;
		}
		else{
			cout<<-1;
			return 0;
		}
	}
	if (9*n<s){
		cout<<-1;
		return 0;
	}
	cout<<MAX_NUM(n,s);
	return 0;
}

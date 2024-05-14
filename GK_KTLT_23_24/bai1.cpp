#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	string s; cin>>s;
	long long thuong=0, hoa=0;
	for (int i=0; i<s.size(); ++i){
		if (islower(s[i])) thuong++;
		else if (isupper(s[i])) hoa++;
	}
	if (hoa>thuong){
		for (int i=0; i<s.size(); ++i){
			s[i]=toupper(s[i]);
		}
		cout<<s;
	}
	else{
		for (int i=0; i<s.size(); ++i){
			s[i]=tolower(s[i]);
		}
		cout<<s;
	}
	return 0; 
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	string s1,s2;
	cin>>s1>>s2;
	int i=0;
	string a,b;
	while(s1[i]=='0') i++;
	for (int k=i; k<s1.length(); ++k){
		a+=s1[k];
	}
    i=0;
	while(s2[i]=='0') i++;
	for (int k=i; k<s2.length(); ++k){
		b+=s2[k];
	}
	if (a.length()<b.length()) {cout<<"<"; return 0;}
    else 
    if (a.length()>b.length()) {cout<<">"; return 0;}
    else
	if (a.length()==b.length()) {cout<<"="; return 0;}
    else 
    if (a<b) cout<<"<";
    else cout<<">";
	return 0;
}

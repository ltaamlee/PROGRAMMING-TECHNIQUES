#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	string s; getline(cin,s);
	int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
	for (int i=0; i<s.size(); ++i){
		if (islower(s[i])) cnt1++;
		else 
			if (isupper(s[i])) cnt2++;
		else 
			if (isdigit(s[i])) cnt3++;
		else cnt4++;
	}
	cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4;
	return 0;
}

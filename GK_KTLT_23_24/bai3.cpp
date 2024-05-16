#include <bits/stdc++.h>
using namespace std;
string ADD(string a, string b){
	int n=max(a.size(),b.size());
	while (a.size()<n) a.insert(0,"0");
	while (b.size()<n) b.insert(0,"0");
	int res,tmp; res=0;
	string c;
	for (int i=n-1; i>=0; i--){
		tmp=(a[i]-'0')+(b[i]-'0')+res;
		res=tmp/10;
		c+=char(tmp%10+'0');
	}
	if (res!=0) c+=char(res+'0');
	reverse(c.begin(),c.end());
	return c;
}
string SUB(string a, string b){
	string calc="";
	int n=max(a.size(),b.size());
	while (a.size()<n) a.insert(a.begin(),'0');
	while (b.size()<n) b.insert(b.begin(),'0');
	string sign;
	int res=0, up, subtrac;
	if (a<b){
		swap(a,b);
		sign="-";
	}
	else sign="";
	for (int i=n-1; i>0; i--){
		up=(a[i]+res<b[i])?(1):(0);
		subtrac=(int(a[i])-48+res+up*10)-(int(b[i])-48);
		calc=char(subtrac+'0')+calc;
		if (up==1) res=-1; else res=0;
	}
	up=(a[0]+res<b[0])?(1):(0);
	subtrac=(int(a[0])-48+res+up*10)-(int(b[0])-48);
	calc=char(subtrac+'0')+calc;
	while(calc.size()>1&& calc[0]=='0') calc.erase(calc.begin());
	calc=sign+calc;
	return calc;
}
string MULTI(string one, string two){
	int a=one.size();
	int b=two.size();
	int m=max(a,b);
	vector<string> multi(1005);
	string plus,infront;
	int res,temp;
	for (int i=b-1; i>=0; i--){
		plus="";
		res=0;
		for (int j=a-1; j>=0; j--){
			temp=(two[i]-48)*(one[j]-48)+res;
			plus+=char(temp%10+48);
			res=temp/10;
		}
		if (res!=0 || plus.empty())
			plus+=char(res+48);
		reverse(plus.begin(),plus.end());
		multi[b-i-1]=plus;
	}
	for (int i=0; i<b; ++i){
		for (int j=0; j<i; ++j){
			multi[i].push_back('0');
		}
	}
	int psize=multi[b-1].size();
	for (int i=0; i<b; i++){
		while(multi[i].size()<psize)
			multi[i].insert(0,"0");
	}
	string out="";
	res=0;
	for (int j=psize-1; j>=0; --j){
		temp=0;
		for (int i=0; i<b; ++i){
			temp+=(multi[i][j]-48);
		}
		temp+=res;
		out+=char(temp%10+48);
		res=temp/10;
	}
	if (res!=0 || out.empty()){
		out+=char(res+48);
	}
	reverse(out.begin(),out.end());
	while(out[0]=='0' &&out.size()>1)
		out.erase(0,1);
	return out;
}
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	string s; cin>>s;
	int pos=0;
	string a="", b="";
	for (int i=0; i<s.size(); ++i){
		if (!isdigit(s[i])){
			pos=i;
		}
	}
	for (int i=0; i<pos; ++i){
		a=a+s[i];
	}
	for (int i=pos+1; i<s.size(); ++i){
		b=b+s[i];
	}
	char ope=s[pos]; 
	if (ope=='+') cout<<ADD(a,b);
	else if (ope=='-') cout<<SUB(a,b);
	else if (ope=='*') cout<<MULTI(a,b);
	return 0; 
}

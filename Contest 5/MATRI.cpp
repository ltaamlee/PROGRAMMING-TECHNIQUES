#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int a,b,c; cin>>a>>b>>c;
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(),v.end());
	double p=double(a+b+c)/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c));
	if (s>0){
		cout<<0;
		return 0;
	}
	long cnt=0;
	while (true){
		v[0]++;
		cnt++;
		sort(v.begin(),v.end());
		p=double(v[0]+v[1]+v[2])/2;
		s=sqrt(p*(p-v[0])*(p-v[1])*(p-v[2]));
		if (s>0) break;
	}
	cout<<cnt;
	return 0;
}

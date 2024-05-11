#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	long long n; cin>>n;
	vector <long long> a(n);
	for (auto &i:a) cin>>i;
	cout<<*max_element(a.begin(),a.end()); //-a.begin() tro den pos max element
	return 0;
}
/*
accumulate: 32bit begin end star -> sum of array
*/

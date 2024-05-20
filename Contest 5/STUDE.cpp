#include <bits/stdc++.h>
#define nmax 100
using namespace std;
struct student{
	string hoten;
	string ms;
	double gpa;
};
int main(){
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    int n; double x; 
	cin>>n>>x;
	vector <student> v(n);
    for (int i=0; i<n; ++i){
    	cin.ignore();
    	getline(cin,v[i].hoten);
    	getline(cin,v[i].ms);
    	cin>>v[i].gpa;
	}
	bool check=false;
	for (int i=0; i<n; ++i){
		if (v[i].gpa>=x){
			check=true;
			cout<<v[i].hoten<<"\n";
			cout<<v[i].ms<<"\n";
			cout<<fixed<<setprecision(6)<<v[i].gpa<<"\n";
		}
	}
	if (!check) cout<<-1;
    return 0;
}

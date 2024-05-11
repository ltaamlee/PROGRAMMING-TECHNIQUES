#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int a[5][5];
	int posi=0, posj=0;
	for (int i=0; i<5; ++i){
		for (int j=0; j<5; ++j){
			cin>>a[i][j];
			if(a[i][j]==1){
				posi=i;
				posj=j;
			}
		}
	}
	cout<<abs(2-posi)+abs(2-posj);
	return 0;
}
/*
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
*/

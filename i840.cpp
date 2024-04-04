#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
	fin
	char matr[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>matr[j][i];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<matr[i][j];
		}
		cout<<"\n";
	}
	
}
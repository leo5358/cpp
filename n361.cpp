#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int check(int num){
	//divide by 2 and 3=>1
	if(num%2==0 and num%3==0){
		return 1;
	}
	//odd num can't divide by 3 =>2
	if(num%2==1 and num%3!=0){
		return 2;
	}
	//perfectsqrt or cant't divide by 7 =>3
	double squareroot=sqrt(num);
	if(squareroot==int(squareroot) or (num%7!=0 and num%2==0)){
		return 3;
	}
	
	//others =>0
	else{
		return 0;
	}
}
int main(){
	int n;
	int temp;
	int building;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		building=check(temp);
		cout<<building<<" ";
	}
}
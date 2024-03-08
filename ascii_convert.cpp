#include<bits/stdc++.h>
using namespace std;
int asciiconvertor(int n){
	return char(n);
}
int main(){
	int n;
	string a;
	while(cin>>n){
		a+=asciiconvertor(n);
	}
	cout<<a<<endl;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,x,k;
	while(cin>>a){
		for(int i=0;i<a;i++){
			cin>>x;
			int flag=1;
			for(int j=2;j<=sqrt(x);j+=(j==2?1:2)){
				if(x%j==0){
					flag=0;
					break;
				}
			}
		if(flag==0) cout<<"N"<<endl;
		else cout<<"Y"<<endl;
		}
		
	}
	
	
	return 0;
}
 
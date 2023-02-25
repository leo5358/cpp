#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(0); 
 cin.tie(0);
 int n,m,sum_n=1,sum_m=1,sum_nm=1;
 while(cin>>n>>m){
 for(int i=1;i<=n;i++)  //sum_n表階層
 {
    sum_n=i*sum_n;
    cout<<sum_n;
 }
 for(int j=1;j<=m;j++)
 {
    sum_m=j*sum_m;
 }
 for(int t=1;t<=(n-m);t++)
 {
    sum_nm=t*sum_nm;
 }
 
 cout<<sum_n/(sum_m*sum_nm)<<endl;

 }
 return 0;
 }
 // 使用while會導致無法輸出，我也不知原因//

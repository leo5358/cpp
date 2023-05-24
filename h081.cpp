// #include<bits/stdc++.h>
// #define fin ios_base::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main()
// {
//     fin
//     int time,d,stonk=0;
//     int temp;
//     bool check=false;
//     cin>>time>>d;
//     vector<int>stock(time);
//     for(int i=0;i<time;i++)
//     {
//         cin>>stock[i];
//     }
//     for(int j=1;j<time;j++)
//     {
//         if(stock[0]+d<stock[j])
//         {
//             stonk+=stock[j]-stock[0];
//             temp=j;
//             check=true;
            
//         }
//     }
//     if(check)
//     {
//         for(int k=temp;k<time;k++)
//         {
//             if(stock[temp]-d>stock[k])
//             {
//                 for(int l=k;l<time;l++)
//                 {
//                     if(stock[k]<stock[l])
//                     {
//                         stonk+=stock[l]-stock[k];
//                     }
//                 }
//             }
//         }
//     }
//     cout<<stonk<<endl;
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int have,now,profit=0,n,D,sell=0;
    cin>>n>>D;
    vector<int>price(101);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    have=price.front();
    now=1;
    for(int i=1;i<n;i++){
        if(now){
            if(price[i]>=have+D){
                profit+=price[i]-have;
                sell=price[i];
                now=0;
            }
        }
        else if(price[i]<=sell-D){
            have=price[i];
            now=1;
        }
    }
    cout<<profit<<"\n";
}
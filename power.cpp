#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int num[n]={0};
for(int i=1;i<n+1;i++){
cin>>num[i];
}
for(int i=0;i<n;i++){
cout<<num[n-i]<<" ";
}
}
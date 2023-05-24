#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b)? a:b;
using namespace std;
int main()
{
    fin
    vector<int>A(3);
    vector<int>B(3);
    int employ,maxincome=INT_MIN;
    for(int i=0;i<3;i++)
    {
        cin>>A[i];
    }
    for(int j=0;j<3;j++)
    {
        cin>>B[j];
    }
    cin>>employ;
    for(int a=0;a<=employ;a++)
    {
        int b=employ-a;
        int y1=A[0]*pow(a,2)+A[1]*a+A[2];
        int y2=B[0]*pow(b,2)+B[1]*b+B[2];
        maxincome=max(maxincome,y1+y2);
    }
    cout<<maxincome<<endl;
}
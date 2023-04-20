#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fine
    vector<vector<int>>score(4,vector<int>(4));
    int A,B,A_first=0,A_second=0,B_first=0,B_second=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>score[i][j];
            if(i==0)
            {
                A_first+=score[i][j];
            }
            if(i==1)
            {
                B_first+=score[i][j];
            }
            if(i==2)
            {
                A_second+=score[i][j];
            }
            if(i==3)
            {
                B_second+=score[i][j];
            }
        }
    }
    cout<<A_first<<":"<<B_first<<endl;
    cout<<A_second<<":"<<B_second<<endl;
    if(A_first>B_first&&A_second>B_second)
    {
        cout<<"Win"<<endl;
    }
    if(A_first<B_first&&A_second<B_second)
    {
        cout<<"Lose"<<endl;
    }
    if((A_first>B_first&&A_second<B_second)||(A_first<B_first&&A_second>B_second))
    {
        cout<<"Tie"<<endl;
    }
}
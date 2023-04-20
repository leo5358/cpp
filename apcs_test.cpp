#include<bits/stdc++.h>
#define ly ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ly
    int times,score;
    int max_score=-100,max_time=0;
    int input_time,input_score;
    int fouls=0;
    cin>>times;
    for(int i=1;i<=times;i++)
    {
        cin>>input_time>>input_score;
        if(input_score==-1)
        {
            fouls++;
        }
        if(input_score>max_score)
        {
            max_score=input_score;
            max_time=input_time;
            score=max_score-times-fouls*2;
        }
        
        
    }
    if(score>0)
        {
            cout<<score<<" "<<max_time<<endl;
        }
        else if(score<=0)
        {
            cout<<0<<" "<<max_time<<endl;
        }
}
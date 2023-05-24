#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fin
    int a,b;
    int count_a,count_b;
    int temp,result=0;
    int times;
    cin>>a>>b;
    cin>>times;
    for(int i=0;i<times;i++)
    {
        count_a=0;
        count_b=0;
        while(cin>>temp)
        {
            if(temp==0)
            {
                break;
            }
            else if(temp==a)
            {
                count_a++;
            }
            else if(temp==b)
            {
                count_b++;
            }
            else if(temp==-a)
            {
                count_a--;
            }
            else if(temp==-b)
            {
                count_b--;
            }
        }
        if(count_a!=0&&count_b!=0)
            {
                result++;
            }
    }
    cout<<result<<endl;
}
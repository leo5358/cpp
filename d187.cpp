#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int tri(int c)
{
    int count=0;
    count+=c%3;
    return count;
}
int tuv(int c)
{
    int count=0;
    if(c%3==2)
    {
        count++;
    }
    else if(c%3==0)
    {
        count+=2;
    }
    else if(c%3==1)
    {
        count+=3;
    }
    return count;
}
int fort(int c)
{
    int count=0;
    if(c%4==0)
    {
        count++;
    }
    else if(c%4==1)
    {
        count+=2;
    }
    else if(c%4==2)
    {
        count+=3;
    }
    else if(c%4==3)
    {
        count+=4;
    }
    return count;
}
int spe(int c)
{
    int count=0;
    if(c%4==3)
    {
        count++;
    }
    else if(c%4==0)
    {
        count+=2;
    }
    else if(c%4==1)
    {
        count+=3;
    }
    else if(c%4==2)
    {
        count+=4;
    }
    return count;
}

int main()
{
    int times,count;
    cin>>times;
    string a;
    for(int i=0;i<times;i++)
    {
        getline(cin,a);
        for(auto c:a)
        {
           
           if(c<112) 
            {
                count+=tri(c);
            }
            else if(c<=118&&c>=116)
            {
                count+=tuv(c);
            }
            else if(c>=112&&c<=116)
            {
                count+=fort(c);
            }
            else 
            {
                count+=spe(c);
            }
        }

        cout<<"Case: #"<<i+1<<" "<<count<<endl;
    }
}
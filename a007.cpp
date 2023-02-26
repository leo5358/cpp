#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    while(cin>>in){
        for(int a=0;a<=in;a++)
        {
            if(in%a==0)
            {
                cout<<"非質數"<<endl;
                break;
            }
            else if(in%a!=0)
            {
                cout<<"質數"<<endl;
                break;
            }
        }
        return 0;
    }
}
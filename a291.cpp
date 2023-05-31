#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{
    fin
    int n;
    int times;
    vector<int>standard(4);
    while(cin>>n)
    {
        standard[0]=n;
        for(int i=1;i<4;i++)
        {
            cin>>standard[i];
        }
        cin>>times;
        for(int m=0;m<times;m++)
        {
            int a=0,b=0;
            vector<int>inpt(4);
            vector<int>temp(4);
            temp.assign(4,0);
            for(int j=0;j<4;j++)
            {
                cin>>inpt[j];
            }
            for(int i=0;i<4;i++)
            {
                temp[i]=standard[i];
                if(inpt[i]==temp[i])
                {
                    a++;
                    temp[i]=-1;
                    inpt[i]=-2;
                }
            }
            for(int n=0;n<4;n++)
            {
                for(int o=0;o<4;o++)
                {
                    if(inpt[n]==temp[o])
                    {
                        b++;
                        temp[o]=-1;
                        inpt[n]=-2;
                    }
                }
            }
            cout<<a<<"A"<<b<<"B"<<endl;
        }
    }
}

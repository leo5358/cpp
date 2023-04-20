#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int A(int ans[4],int input[4])
{
    int count=0;
    for(int a=0;a<4;a++)
    {
        if(ans[a]==input[a])
        {
            count++;
        }
    }
    return count;
}
int B(int ans[4],int input[4])
{
    int count=0;
   
        for(int m=0;m<4;m++)
        {
            
             for(int n=0;n<=4;n++)
            {   
                if(ans[m]!=input[m])
                {
                    if(ans[m]==input[n])
                    {
                        count++;
                        input[n]=-1;
                        ans[m]=-1;
                    }
                    
                }
            }
            //     if(ans[m+1]==input[n])
            //         {
            //             count++;
            //             cout<<ans[m+1]<<m+1<<" "<<input[n]<<n<<"\n";
            //             ans[m+1]=-1;
            //         }
            //         if(ans[m+2]==input[n])
            //         {
            //             count++;
            //             cout<<ans[m+2]<<m+2<<" "<<input[n]<<n<<"\n";
            //             ans[m+2]=-1;

            //         }
            //         if(ans[m+3]==input[n])
            //         {
            //             count++;
            //             cout<<ans[m+3]<<m+3<<" "<<input[n]<<n<<"\n";
            //             ans[m+3]=-1;  
            //         }
                
            // }
        }
    return count;
}
int main()
{
    fine
    int ans[4];
    int times,a_num,b_num;
    int input[4];
    for(int i=0;i<4;i++)
    {
       cin>>ans[i];
    }
    cin>>times;
    for(int k=0;k<times;k++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>input[j];
        }
        a_num=A(ans,input);
        b_num=B(ans,input);
        cout<<a_num<<"A"<<b_num<<"B"<<endl;
    }
    
}
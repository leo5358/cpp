#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return reversedNum;
}

int main()
{
    int a;
    while(cin>>a)
    {
        int check=0;
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            {
                check++;
            }
        }
        if(check>2)
        {
            cout<<a<<" is prime."<<endl;
        }
        else if(check<=2)
        {
            int num=0;
            int ch=0;
            num=reverseNumber(a);
            for(int i=1;i<=num;i++)
            {
                if(num%i==0)
                {
                    ch++;
                }
            }
            if(ch>2)
            {
                cout<<a<<" is emirp."<<endl;
            }
        }
        else 
        {
            cout<<a<<" is not prime."<<endl;
        }
    }
}
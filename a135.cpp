#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fin
    string a;
    int time=0;
    while(cin>>a)
    {
        if(a!="#")
        {
            time++;
            cout<<"Case "<<time<<":";
            if(a=="HELLO")
            {
                cout<<" ENGLISH"<<endl;
            }
            else if(a=="HOLA")
            {
                cout<<" SPANISH"<<endl;
            }
            else if(a=="HALLO")
            {
                cout<<" GERMAN"<<endl;
            }
            else if(a=="BONJOUR")
            {
                cout<<" FRENCH"<<endl;
            }
            else if(a=="CIAO")
            {
                cout<<" ITALIAN"<<endl;
            }
            else if(a=="ZDRAVSTVUJTE")
            {
                cout<<" RUSSIAN"<<endl;
            }
            else 
            {
                cout<<" UNKNOWN"<<endl;
            }
        }
    }

}
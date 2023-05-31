#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int a,b,n,str,sum;
char x[102];
int main()
{
 while(scanf("%d ",&n)==1) 
{
  for(a=0;a<n;a++)
  {
   gets(x);
   str=strlen(x);
   printf("Case #%d: ",a+1);
   sum=0;
   for(b=0;b<str;b++)
   {
    if(x[b]=='a'||x[b]=='d'||x[b]=='g'||x[b]=='j'||x[b]=='m'||x[b]=='p'||x[b]=='t'||x[b]=='w'||x[b]==' ')
    sum+=1;
    else if(x[b]=='b'||x[b]=='e'||x[b]=='h'||x[b]=='k'||x[b]=='n'||x[b]=='q'||x[b]=='u'||x[b]=='x')
    sum+=2;
    else if(x[b]=='c'||x[b]=='f'||x[b]=='i'||x[b]=='l'||x[b]=='o'||x[b]=='r'||x[b]=='v'||x[b]=='y')
    sum+=3;
    else if(x[b]=='s'||x[b]=='z')
    sum+=4;
   }
   printf("%d\n",sum);
  }
 }
 return 0;
}
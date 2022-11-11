#include<stdio.h>
int main(){
long long int i,b,e,n,x,on,en,al;
char wn,all,even,o,c,a,odd;
all=a;
odd=o;
printf("enter starting and\n ending number and wn");
scanf("%lld%lld%s",&b,&e,&wn);
n=e-b;
en=0;
on=0;
al=0;
if(wn=='c')
{
if((b%2==0)&&(b!=0))
x=b-2;
if(b%2!=0)
x=b-1;
if(b==0)
x=b;
if((b%2==0)&&(b!=0))
{
for(i=0;i<=n;i=i+2)
{
printf("\n%lld",x=x+2);
en=en+1;
}
printf("\ttotal numbers en=%lld",en);
}
if(b%2!=0)
{
for(i=0;i<n;i=i+2)
{
printf("\n%ld",x=x+2);
en=en+1;
}
printf("\ttotalnumbers en=%ld",en);
}
if(b==0)
{
for(i=0;i<n;i=i+2)
{
printf("\n%lld",x=x+2);
en=en+1;
}
printf("\ttotal numbers en=%ld",en);
}
}
if(wn=='o')
{
if((b%2==0)&&(b!=0))
x=b-1;
if(b%2!=0)
x=b-2;
if(b==0)
x=b+1;
if((b%2==0)&&(b!=0))
{
for(i=0;i<n;i=i+2)
{
printf("\n%ld",x=x+2);
on=on+1;
}
printf("\ttotal nmubers on=%ld",on);
}
if(b%2!=0)
{
for(i=0;i<n;i=i+2)
{
printf("\n%ld",x=x+2);
on=on+1;
}
printf("\ttotal numbers on=%ld",on);
}
if(b==0)
{
for(i=0;i<(n-2);i=i+2)
{
printf("\n%ld",x=x+2);
on=on+1;
}
printf("\ttotal numbers on=%ld",on);
}
}
if(wn=='a')
{
for(i=0;i<=n;i=i+1)
{
printf("\n%ld",b++);
al=al+1;
}
printf("\ttotal number al=%ld",al);
}
return 0;
}
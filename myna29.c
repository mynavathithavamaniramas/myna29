
#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("ENTER n VALUE:\t\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=i ; 
}
printf("The sum of n value is %d:",sum);
return 0;
}

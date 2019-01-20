#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,i,mul;
scanf("%d",&n);
while(n>0)
{
scanf("%d",&num);
for(i=1;i<=5;i++)
{
mul=num*i;
printf("%d",mul);
}
n--;
}
getch();
}

#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void minswap(int a[],int n,int k)
{
int count=0,flag=0,i,j;
for(i=0;i<n;i++)
{
if(a[i]<=k)
{
for(j=i+1;j<n;j++)
{
if(a[j]<=k && flag==1)
count++;
else if(a[j]<=k && flag==0)
continue;
else
flag=1;
}
break;
}
}
cout<<"\nMinimum swaps:"<<count;
}
int main()
{
int a[]={2,7,9,5,8,7,4};
int n=sizeof(a)/sizeof(int);
int k;
clrscr();
cout<<"\nEnter k value:";
cin>>k;
minswap(a,n,k);
getch();
return 0;
}
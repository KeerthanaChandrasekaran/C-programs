#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void print(int a[],int n)
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}
void minswap(int a[],int n,int k)
{
int count=0,flag=0,i,j,t,temp;
for(i=0;i<n;i++)
{
if(a[i]<=k)
{
for(j=i+1;j<n;j++)
{
if(a[j]<=k && flag==1)
{
count++;
temp=a[t];
a[t]=a[j];
a[j]=temp;
t=t+1;
}
else if(a[j]<=k && flag==0)
continue;
else if(flag==0)
{
t=j;
flag=1;
}
}
break;
}
}
cout<<"\nMinimum swaps:"<<count<<"\n";
print(a,n);
}
int main()
{
int a[]={2,7,9,5,8,7,4};
int n=sizeof(a)/sizeof(int);
int k;
clrscr();
print(a,n);
cout<<"\nEnter k value:";
cin>>k;
minswap(a,n,k);
getch();
return 0;
}
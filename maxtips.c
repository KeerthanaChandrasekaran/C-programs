#include<iostream.h>
#include<conio.h>
#define MAX 30
void calmaxtips(int a[],int b[],int n,int x,int y)
{
int i,max,sum=0;
if(x+y>=n)
{
for(i=0;i<n;i++)
{
if(a[i]>b[i])
max=a[i];
else
max=b[i];
sum+=max;
}
cout<<"\nMaximum tips:"<<sum;
}
else
cout<<"\nInvalid input";
}
int main()
{
int a[MAX],b[MAX],n,X,Y,N;
int i,j;
clrscr();
cout<<"\nEnter the no. of testcases:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\nEnter N,X and Y values:";
cin>>N>>X>>Y;
cout<<"\nEnter tips of waiter 1:";
for(j=0;j<N;j++)
cin>>a[j];
cout<<"\nEnter tips of waiter 2:";
for(j=0;j<N;j++)
cin>>b[j];
calmaxtips(a,b,N,X,Y);
}
getch();
return 0;
}
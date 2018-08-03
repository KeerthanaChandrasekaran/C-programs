#include<iostream.h>
#include<math.h>
#include<conio.h>
#define MAX 1000
void closestpair(int a[],int n,int x)
{
int min=MAX;
int i,j,temp,n1,n2;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
temp=abs(a[i]*a[j]-x);
if(temp<min)
{
min=temp;
n1=a[i];
n2=a[j];
}
}
}
cout<<"\nClosest pair:"<<n1<<" "<<n2;
return;
}
int main()
{
int a[]={4,2,3,10,5};
int n=sizeof(a)/sizeof(a[0]),x;
clrscr();
cout<<"\nGiven array:";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\nEnter the x value:";
cin>>x;
closestpair(a,n,x);
getch();
return 0;
}
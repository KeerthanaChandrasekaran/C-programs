#include<iostream.h>
#include<conio.h>
#define MAX 100
void ismountain(int a[],int n,int x,int y)
{
int i,flag=0;
int temp[MAX];
temp[x]=0;
for(i=x;i<y && i<n;i++)
{
if(a[i+1]>a[i])
temp[i+1]=1;
else if(a[i+1]<a[i])
temp[i+1]=-1;
}
for(i=x+1;i<=y && i<n;i++)
{
if(temp[i]==1 && flag!=2)
{
flag=1;
continue;
}
else if(temp[i]==-1)
{
flag=2;
continue;
}
else
break;
}
if(i>y)
cout<<"\nYes";
else
cout<<"\nNo";
}
int main()
{
int a[]={2,3,2,1,2,0,5};
int r1,r2;
int n=sizeof(a)/sizeof(a[0]);
clrscr();
cout<<"\nGiven array:";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\nIndex1(<"<<n<<"):";
cin>>r1;
cout<<"\nIndex2(<"<<n<<"):";
cin>>r2;
ismountain(a,n,r1,r2);
getch();
return 0;
}
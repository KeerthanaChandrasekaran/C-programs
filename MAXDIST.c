#include<iostream.h>
#include<conio.h>
#define MAX 100
int maxdist(int a[],int n)
{
int i,j,diff,max=0;
int h[MAX];
for(i=0;i<MAX;i++)
h[i]=0;
for(i=0;i<n;i++)
{
if(h[a[i]]==0)
{
h[a[i]]=1;
for(j=n-1;j>=0;j--)
{
if(a[i]==a[j])
{
diff=j-i;
if(diff>max)
max=diff;
break;
}
}
}
}
return max;
}
int main()
{
int max;
int a[]={1,2,4,2,1,4,4};
int n=sizeof(a)/sizeof(a[0]);
clrscr();
cout<<"\nGiven array:";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
max=maxdist(a,n);
cout<<"\nMaximum distance:"<<max;
getch();
return 0;
}
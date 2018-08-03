#include<iostream.h>
#include<conio.h>
void findvalue(int a[],int n,int b)
{
int count,i,j;
for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
for(int k=j;k<n-1;k++)
a[k]=a[k+1];
n--;
j--;
}
}
if(count==b)
{
cout<<"\n"<<a[i];
break;
}
}
return;
}
int main()
{
int a[]={1,2,3,2,2,2,3,1};
int b;
int n=sizeof(a)/sizeof(int);
clrscr();
cout<<"\nGiven array:";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\nEnter b value:";
cin>>b;
findvalue(a,n,b);
getch();
return 0;
}
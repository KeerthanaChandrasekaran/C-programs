#include<iostream.h>
#include<conio.h>
#define MAX 100
void iscombination(int a[],int n,int x)
{
int i,j,sum,count;
for(i=0;i<n-3;i++)
{
count=1;
sum=0;
for(j=i;count<=4,j<n;j++)
{
sum+=a[j];
count++;
}
if(sum==x)
{
cout<<"1\n";
break;
}
}
}
int main()
{
int a[MAX],x,n,size,i;
clrscr();
cout<<"\nEnter the no. of testcases:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Testcase "<<i+1;
cout<<"\nEnter the array size:";
cin>>size;
cout<<"\nEnter the elements:";
for(i=0;i<size;i++)
cin>>a[i];
cout<<"\nEnter X value:";
cin>>x;
iscombination(a,size,x);
}
getch();
return 0;
}
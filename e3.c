#include<iostream.h>
#include<conio.h>
int main()
{
int n,i,j,temp,a[10],count=0;
clrscr();
cout<<"Enter the n value:\n";
cin>>n;
temp=n;
for(i=0;temp!=0;i++)
{
a[i]=temp%2;
temp=temp/2;
}
j=i;
cout<<"Binary value:";
for(i--;i>=0;i--)
cout<<a[i];
for(i=0;i<j;i++)
{
if(a[i] == 1)
count++;
}
if(count%2==0)
cout<<"\nEven parity";
else
cout<<"\nOdd parity";
getch();
return 0;
}
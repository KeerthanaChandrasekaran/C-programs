#include<iostream.h>
#include<conio.h>
#include<string.h>
#define MAX 100
void freq(char a[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
int count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
for(int k=j;k<n;k++)
a[k]=a[k+1];
n--;
j--;
}
}
cout<<"\n"<<a[i]<<":"<<count;
}
return ;
}
int main()
{
char a[MAX];
clrscr();
cout<<"\nEnter the string:";
cin>>a;
int n=strlen(a);
freq(a,n);
getch();
return 0;
}
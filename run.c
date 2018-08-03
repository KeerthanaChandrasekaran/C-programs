#include<iostream.h>
#include<conio.h>
void runlength(char a[],int n)
{
for(int i=0;i<n;i++)
{
int count=1;
for(int j=i+1;j<n;j++)
{
if(a[i]==a[j])
count++;
else
{
cout<<a[i]<<count;
i=j-1;
break;
}
}
}
return;
}
int main()
{
char a[]="wwwwxxdccc";
int n=sizeof(a)/sizeof(a[0]);
clrscr();
cout<<"\nGiven string:"<<a<<"\n";
runlength(a,n);
getch();
return 0;
}
#include<iostream.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
bool ispower(const char *a,const char *b)
{
int p=atoi(a);
int q=atoi(b);
int temp1,temp2;
if(p<q)
{
temp1=p;
temp2=q;
}
else
{
temp1=q;
temp2=p;
}
int y=pow(temp1,0);
for(int i=1;y<temp2;i++)
y=pow(temp1,i);
if(y==temp2)
return true;
else
return false;
}
int main()
{
const char *a="12",*b="144";
bool x;
clrscr();
cout<<"\nGiven strings:"<<a<<" "<<b;
x=ispower(a,b);
cout<<"\n"<<x;
getch();
return 0;
}

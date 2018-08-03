#include<iostream.h>
#include<math.h>
#include<conio.h>
void longseq(int a[],int n)
{
int count=0,temp1,temp2;
int i,j;
for(i=0;i<n;i++)
{
temp1=i;
temp2=1;
for(j=i+1;j<n;j++)
{
if(abs(a[temp1]-a[j])==1){
temp2++;
temp1=j;
}
}
if(temp2>count)
count=temp2;
}
cout<<"\nLength of longest subsequence:"<<count;
}
int main()
{
int a[]={10,9,3,2,1,0,8,1};
int n=sizeof(a)/sizeof(a[0]);
clrscr();
cout<<"\nOriginal array:";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
longseq(a,n);
getch();
return 0;
}
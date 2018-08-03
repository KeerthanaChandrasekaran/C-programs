#include<iostream.h>
#include<conio.h>
#include<math.h>
int maxsum(int a[],int n,int k)
{
int sum,temp,flag,max1=0,max2=0;
int i,j;
for(i=0;i<n,k<=n;i++)
{
sum=0;
flag=0;
for(j=i;j<k;j++)
sum+=a[j];
for(j=i;j<k;j++)
{
temp=sum-a[j];
if(temp>max1)
{
flag=1;
max1=temp;
}
}
if(max1>max2 && flag==1)
max2=max1;
k++;
}
return max2;
}
int main()
{
int a[]={1,2,3,-4,5};
int n=sizeof(a)/sizeof(int);
int k;
clrscr();
cout<<"\nGiven array:";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\nEnter the length of subarray(<="<<n<<"):";
cin>>k;
int res=maxsum(a,n,k);
cout<<"\nSum:"<<res;
getch();
return 0;
}


#include<iostream.h>
#include<conio.h>
int maxsum(int a[],int n,int k)
{
int sum,max=0;
int i,j,p,q;
for(i=0;i<n;i++)
{
sum=0;
for(j=i;j<k;j++)
sum+=a[j];
k++;
if(sum>max)
{
max=sum;
p=i;
q=j;
}
}
cout<<"\nMaximum sum subarray:";
for(i=p;i<q;i++)
cout<<a[i]<<" ";
return max;
}
int main()
{
int a[]={1,2,6,4,9,10,3,-1,-4};
int n=sizeof(a)/sizeof(int);
int k;
clrscr();
cout<<"\nGiven array:";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\nEnter the length of subarray(<"<<n<<"):";
cin>>k;
int res=maxsum(a,n,k);
cout<<"\nSum:"<<res;
getch();
return 0;
}


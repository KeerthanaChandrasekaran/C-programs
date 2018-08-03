#include<iostream.h>
#include<conio.h>
void printarr(int a[],int n)
{
int i;
cout<<"\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
}
int median(int a[],int n)
{
if(n%2!=0)
return a[n/2];
else
{
int sum=a[n/2]+a[(n-1)/2];
return sum/2;
}
}
void merge(int a[],int b[],int m,int l)
{
int n=m+l;
int c[100];
int i=0,j=0,k;
for(k=0;k<n;k++)
{
if(i<m && j<l)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
}
else if(i>=m)
c[k]=b[j++];
else
c[k]=a[i++];
}
cout<<"\nAfter merging arrays:";
for(k=0;k<n;k++)
cout<<c[k]<<" ";
int x=median(c,n);
cout<<"\nMedian:"<<x;
}

int main()
{
int a[]={3,6,7};
int b[]={1,2,4,8};
int m=sizeof(a)/sizeof(a[0]);
int n=sizeof(b)/sizeof(b[0]);
clrscr();
cout<<"\nThe given sorted arrays:";
printarr(a,m);
printarr(b,n);
merge(a,b,m,n);
getch();
return 0;
}

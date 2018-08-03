#include<iostream.h>
#include<conio.h>
void print(int a[],int n)
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}
int kthsmall(int a[],int n,int k)
{
int i,j;
int temp;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
return a[k-1];
}
int main()
{
int a[]={9,2,1,6,4,10};
int n=sizeof(a)/sizeof(int);
int k;
clrscr();
cout<<"\nGiven array:";
print(a,n);
cout<<"\nEnter the k value("<<"<"<<n<<"):";
cin>>k;
int res=kthsmall(a,n,k);
cout<<"\n"<<res;
getch();
return 0;
}


#include<stdio.h>
#include<conio.h>
main()
{
int a[]={2,7,9,5,8,7,4},k;
int n=sizeof(a)/sizeof(a[0]);
print(a,n);
printf("\nenter the key");
scanf("%d",&k);
lessthan(a,n,k);
return 0;
}
void lessthan(int a[] , int n , int k)
{
    int i,count=0,temp,temp1,temp2,j;
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            count++;
        }
    }
    temp1=count;
    printf("the no of values less than k is %d",temp1);

    for(i=0;i<n;i++)
    {
        if(a[i]>k&&count!=0)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]<k)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    count--;
                    break;
                }
            }
        }
        else if(a[i]<k &&count!=0)
        {
            count--;
        }
    }
    for(i=0;i<n;i++)
    {
        if(k==a[temp1])
        {
            break;
        }
        else if(a[i]==k)
        {
            temp2=a[temp1];
            a[temp1]=a[i];
            a[i]=temp2;
        }
    }
    print(a,n);
}
void print(int a[],int n)
{
    int i;
    printf("\nthe array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}



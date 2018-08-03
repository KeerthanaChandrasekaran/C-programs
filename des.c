#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void descorder(char s[100])
{
char temp;
for(int i=0;i<strlen(s);i++)
{
for(int j=i+1;j<strlen(s);j++)
{
if(s[i]<s[j])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
}
cout<<"\nString in descending order:"<<s;
return ;
}
int main()
{
char s[100];
clrscr();
cout<<"enter the string:";
cin>>s;
descorder(s);
getch();
return 0;
}
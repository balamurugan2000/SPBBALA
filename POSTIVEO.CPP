#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
cout<<"ENTER THE VALUE :";
cin>>a;
if(a>0)
{
cout<<"THE VALUE "<< a <<" IS POSTIVE";
}
else
{ if(a<0)
{
cout<<"THE VALUE "<< a <<" IS NEGATIVE";
}
else
{
cout<<"THE VALUE IS ZERO:";
}
}
getch();
}

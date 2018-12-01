#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char a;
cout<<"ENTER THE VALUE :";
cin>>a;
if(a=='a'||a=='A'||a=='e'||a=='E'||a=='I'||a=='i'||a=='o'||a=='O'||a=='U'||a=='u')
{
cout<<"THE VALUE "<< a <<" IS VOWEL";
}
else
{
cout<<"THE VALUE "<< a <<" IS CONSONANT";
}
getch();
}
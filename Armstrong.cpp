\\Armstrong number from 1 to 1000.

#include<iostream.h>
#include<conio.h>
void main()
{
  int b,c,d,i;
  clrscr();
  for(i=1;i<=1000;i++)
  {
    c=0;
    b=i;
    while(b!=0)
    {
      d=b%10;
      c=c+(d*d*d);
      b/=10;
    }
    if(i==c)
    {
      cout<<"\n"<<c;
    }
  }
  getch();
}

// Printing book details using constructor overloading 

#include<iostream.h>
#include<conio.h>
class book
{
  private:
  int page,price;
  char name[50],auth[50];
  public:
  book()
  {
    cout<<"\n Enter the book name:";
    cin>>name;
    cout<<"\n Enter the author name:";
    cin>>auth;
  }
  book(int a,int b)
  {
    page=a;
    price=b;
  }
  void show()
  {
    cout<<"\n Book Name:"<<name;
    cout<<"\n Author Name:"<<auth;
  }
  void pr()
  {
    cout<<"\n No of pages:"<<page;
    cout<<"\n Price of the book:"<<price;
  }
};
void main()
{
  clrscr();
  book b,b1(486,500);
  b.show();
  b1.pr();
  getch();
}
   

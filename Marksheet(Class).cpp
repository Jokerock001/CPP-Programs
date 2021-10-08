#include<iostream.h>
#include<conio.h>
class details
{
 private:
 int roll,soc,exploit,bug,scripts,recon;
 char school[50],name[50],std[40];
 float avg,tot,per;
 public:
 void get_about()
 {
  cout<<"Enter your name:";
  cin>>name;
  cout<<"Enter your school name:";
  cin>>school;
  cout<<"Enter your standard:";
  cin>>std;
  cout<<"Enter your roll no:";
  cin>>roll;
 }
 void get_marks()
 {
  cout<<"Enter your mark in Social Engineering:";
  cin>>soc;
  cout<<"Enter your mark in Exploitation:";
  cin>>exploit;
  cout<<"Enter your mark in Bug Hunting:";
  cin>>bug;
  cout<<"Enter your mark in Reconnaissance:";
  cin>>recon;
  cout<<"Enter your mark in Writing Payloads:";
  cin>>scripts;
 }
 void calculate()
 {
  tot=soc+exploit+bug+recon+scripts;
  avg=tot/5;
  per=tot/100;
 }
 void show_about()
 {
  cout<<"Name:"<<name;
  cout<<"School:"<<school;
  cout<<"Standard:"<<std;
  cout<<"Roll No:"<<roll;
 }
 void show_marks()
 {
  cout<<"Mark in Social Engineering:"<<soc;
  cout<<"Mark in Exploitation:"<<exploit;
  cout<<"Mark in Bug Hunting:"<<bug;
  cout<<"Mark in Reconnaissance:"<<recon;
  cout<<"Mark in Writing Payloads:"<<scripts;
  cout<<"Total Marks:"<<tot;
  cout<<"Average:"<<avg;
  cout<<"Percentange:"<<per;
 }
}
void main()
{
 clrscr();
 get_about();
 get_marks();
 calculate();
 show_about();
 show_marks();
 getch();
}

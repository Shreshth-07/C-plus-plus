#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

class str
{
  int id;
  string name;
  public:
  void getstr()
  {
    cout<<"Enter the ID:";
    cin>>id;
    cout<<"Enter the name:";
    getline(cin>>ws,name);
    cout<<"Student details are:";
    cout<<"ID= "<<id<<endl;
    cout<<"Name= "<<name<<endl;
  }
};
int main()
{
  str s;
  ofstream file;
  file.open("str.dat");
  char op;
  do
  {
      s.getstr();
      file.write((char*)&s,sizeof(s));
      cout<<"one row is added"<<endl;
      cout<<"Any more student.[Y/N]"<<endl;
      cin>>op;
  }
  while(op=='y'||op=='Y');
  file.close();
}

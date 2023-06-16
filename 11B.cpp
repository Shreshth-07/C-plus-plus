#include<iostream>
using namespace std;
class A
{
protected:
int a;
public:
void geta();
};
void A :: geta()
{
cout<<"Enter the value of A: ";
cin>>a;
}
class B
{
protected:
int b;
public:
void getb();
};
void B :: getb()
{
cout<<"Enter the value of B: ";
cin>>b;
}
class C : public A , public B
{
int c;
public:
void add();
void display();
};
void C :: add()
{
c=a+b;
}
void C :: display()
{
cout<<"Value of A and B: "<<a<<" "<<b<<endl<<endl;
cout<<"Value of addition: "<<c<<endl;
}
int main()
{
C obj;
obj.geta();
obj.getb();
obj.add();
obj.display();
return 0;
}

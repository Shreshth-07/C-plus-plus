#include<iostream>
using namespace std;
class base
{
protected:
int a;
public:
void seta(int x)
{
a=x;
}
void display(void)
{
cout<<"A: "<<a<<endl;
}
};
class derived : public base
{
int b;
public:
void setb(int y)
{
b=y;
}
void display(void)
{
cout<<"B: "<<b;
}
};
int main()
{
base *ptr;
base obj;
ptr=&obj;
ptr->seta(20);
ptr->display();
derived obja;
derived *p;
*p=obja;
p->setb(200);
p->display();
}

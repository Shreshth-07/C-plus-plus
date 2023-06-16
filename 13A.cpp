#include<iostream>
using namespace std;
class A
{
int a;
public:
void get()
{
cout<<"Enter the number: ";
cin>>a;
}
void operator*(A obj1)
{
cout<<"Addition of the numbers: "<<a+obj1.a;
}
};
int main()
{
A obj1,obj2;
obj1.get();
obj2.get();
obj1*obj2;
return 0;
}

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
void friend operator+(A , A);
};
void operator+(A obj1 , A obj2)
{
cout<<"Addition of the numbers: "<<obj1.a+obj2.a;
}
int main()
{
A obj1,obj2;
obj1.get();
obj2.get();
obj1+obj2;
return 0;
}

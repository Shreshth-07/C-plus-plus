#include<iostream>
using namespace std;
class stu
{
protected:
int roll;
public:
void getroll();
void putroll();
};
void stu :: getroll()
{
cout<<"Enter the roll number: ";
cin>>roll;
}
void stu :: putroll()
{
cout<<"Roll no.: "<<roll<<endl;
}
class test : public stu
{
protected:
float m1,m2;
public:
void getmarks();
void putmarks();
};
void test :: getmarks()
{
cout<<"Enter the first marks: ";
cin>>m1;
cout<<"Enter the second marks: ";
cin>>m2;
}
void test :: putmarks()
{
cout<<"Marks of "<<"Test 1: "<<m1<<endl<<"Marks of Test 2: "<<m2<<endl;
}
class result : public test
{
float total;
public:
void display()
{
total=m1+m2;
putroll();
putmarks();
cout<<"Total: "<<total<<endl;
}
};
int main()
{
result res;
res.getroll();
res.getmarks();
res.display();
return 0;
}

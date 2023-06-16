#include<iostream>
using namespace std;
class Integer
{
    int i;
    float x=0,y=0;
    public:
    void getvalue()
    {
      cout<<"Enter the value of X and Y:";
      cin>>x>>y;
    }
    Integer(int i = 0)
    {
        this->i = i;
    }
    Integer operator++()
    {
        Integer temp1;
        temp1.i = ++i;
        return temp1;
    }
    Integer operator--()
    {
        Integer temp2;
        temp2.i = --i;
        return temp2;
    }
    Integer operator+(Integer ab)
    {
        Integer temp3;
        temp3.x=x+ab.x;
        temp3.y=y+ab.y;
        return temp3;
    }

    void display1()//For Increment operator
    {
        cout << "i = " << i << endl;
    }
    void display2()//For decrement operator
    {
        cout << "i = " << i<< endl;
    }
    void display3()//For Binary operator
    {
        cout<<x<<"+j"<<y<<endl;
    }
};
int main()
{
    Integer i1(3),I1,I2,result;
    I1.getvalue();
    I2.getvalue();
    result=I1+I2;
    cout<<"Input values:"<<endl;
    I1.display3();
    I2.display3();
    result.display3();
    cout<<endl<<"Unary operation on I integer."<<endl;
    cout << "Before increment: ";
    i1.display1();
    Integer i2 = ++i1;
    cout << "After increment: ";
    i2.display1();
    cout << "Before decrement: ";
    i1.display2();
    Integer i3 = --i1;
    cout << "After decrement: ";
    i3.display2();

}

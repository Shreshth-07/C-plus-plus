#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Bill
{
public:
    string name;
    void getData();
    float Charge(int);
    void Display(int, int);
};
void Bill::getData()
{
    cout<<"Enter Consumer Name...."<<endl;
    getline(cin>>ws,name);
}
float Bill::Charge(int u)
{
    if(u>0 && u<=100)
        return (0.6*u);
    if(u>100 && u<=300)
        return ((0.6*100) + (u-100)*0.8);
    if(u>300)
        return ((0.6*100) + (0.8*200) + (u-300)*0.9);
}

void Bill::Display(int u, int c)
{
    cout<<"Name:- "<<name<<endl;
    cout<<"Units Consumed:- "<<u<<endl;
    cout<<"Bill = Rs."<<c<<endl;
}

int main()
{
    Bill obj;
    int units;
    obj.getData();

    cout<<"Enter the Units Consumed...."<<endl;
    cin>>units;
    float charge=obj.Charge(units);
    charge=charge+50;
    if(charge>300)
    {
        charge=charge+ (0.15*charge);
    }

    obj.Display(units, charge);

    return 0;
}

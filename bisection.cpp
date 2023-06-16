#include<iostream>
using namespace std;
#define EPSILON 0.01
 
double func(double x)
{
    return x*x*x - 4*x -9;
}
 
void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }
 
    double c = a;
    while ((b-a) >= EPSILON)
    {
        c = (a+b)/2;
 
        if (func(c) == 0.0)
            break;

        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}
 
int main()
{
    double a, b;
    cout<<"Enter the value A:";
    cin>>a;
    cout<<"Enter the value B:";
    cin>>b;
    bisection(a, b);
    return 0;
}
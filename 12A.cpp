#include<iostream>
#include<string.h>
using namespace std;
class A
{
string a;
public:
void get()
{
cout<<"Enter the string: ";
getline(cin>>ws,a);
}
void friend operator+(A , A);
};
void operator+(A str1 , A str2)
{
A str3;
str3.a=str1.a+" "+str2.a;
cout<<"After adding the two strings: "<<str3.a<<endl;
}
int main()
{
A str1,str2;
str1.get();
str2.get();
str1+str2;
return 0;
}

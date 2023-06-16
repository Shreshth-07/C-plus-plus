#include<iostream>
using namespace std;
class test
{
int static count;
int no;
public:
void get(int a)
{
no=a;
count++;
}
void getcount(void)
{
cout<<"Count: "<<count;
}
};
int test :: count;
int main()
{
test a,b,c,d,e;
a.get(1);
b.get(2);
c.get(3);
d.get(4);
e.getcount();
return 0;
}

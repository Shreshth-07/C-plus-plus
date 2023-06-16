#include<iostream>
using namespace std;
void swap(int &, int &);
	int main()
{ int a=99, b=00;
cout<<"A= "<<a<<endl;
cout<<"B= "<<b<<endl;
swap(a, b);
cout<<"After SWAP A= "<<a<<endl;
cout<<"After SWAP B= "<<b<<endl;
return 0;
}
void swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}

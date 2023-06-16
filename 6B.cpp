#include<iostream>
#include<math.h>
using namespace std;
double Power(double num, int p)
{
        double r;
		r=pow(num, p);
		return r;
   }
int main()
 {
double n, res;
int m;
cout<<"Enter the Number"<<endl;
cin>>n;
cout<<"Enter the Power"<<endl;
cin>>m;
res=Power(n, m);
cout<<"Result is :"<<n<<"^"<<m<<"= "<<res<<endl;
return 0;
 }

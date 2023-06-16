#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
		int year;
cout<<"Enter any Year"<<endl;
cin>>year;
if(year%400==0)
{
cout<<"LEAP YEAR"<<endl;
}
else if(year%100==0)
{
cout<<"NOT A LEAP YEAR"<<endl;
}
else if(year%4==0)
{
cout<<"LEAP YEAR"<<endl;
}
else
cout<<"NOT A LEAP YEAR"<<endl;
	return 0;
}


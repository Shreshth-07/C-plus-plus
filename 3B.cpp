#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
		int num,fact=1;
		cout<<"Enter a Number"<<endl;
		cin>>num;
		for(int i=1; i<=num; i++)
		{
		fact=fact*i;
		}
		cout<<"Factorial of "<< num<<": "<<fact;
	    return 0;
}

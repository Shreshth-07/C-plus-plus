#include<iostream>
using namespace std;

template < class t>

t sum(t a[],int size)
{
 t s = 0;
 for(int i=0 ; i< size;i++)
 s=s+a[i];

return s;
}

int main()
{
int x[5]={1,5,7,9,12};
float y[3]= {5.2,2.1,3.5};
cout<<" Int array sum:"<<sum(x,5)<< endl;
cout<<" float array sum:"<< sum (y,3)<< endl;
return 0;
}

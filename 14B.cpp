#include<iostream>
using namespace std;
class Test
{
	public:
		double  n1, n2;
		void input()
	{
		cout<<"Enter Two Double Type numbers"<<endl;
		cin>>n1>>n2;
    }
void divide()
{
		try
		{
			if(cin.fail())
				throw "Invalid Input";
			if(n1==0 || n2==0)
				throw 0;
			if(n1 > n2)
				cout<<"Answer :- "<<n1/n2<<endl;
			else
				cout<<"Answer :- "<<n2/n1<<endl;
		}
		catch(const int n)
		{
			cout<<"Division by "<<n<<" is not possible."<<endl;
		}
		catch(const char* str)
		{
			cout<<str;
		}
}
};
int main()
{
		Test obj;
		obj.input();
		obj.divide();
		return 0;
}

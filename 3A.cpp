#include <iostream>
using namespace std;

class Demo
{
	private:
		static int X;

	public:
		static void display()
		{
			cout <<"Value of X: " << X << endl;
		}
};
int Demo :: X =10;

int main()
{
	Demo X;
	X.display();
	return 0;
}

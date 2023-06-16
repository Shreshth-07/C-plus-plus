#include <iostream>
#include <string>
using namespace std;

int mult( int A[4][4],  int B[4][4] )
{

int C[4][4], num;

for (int i=0; i<4; i++){
     for(int j=0; j<4; j++){
        num = 0;
        for(int k=0; k<4; k++){
          num += A[i][k]*B[k][j];
}
      C[i][j]=num;
      cout << num << " ";
}
     cout << endl;
}

return 0;

}

int main()
{
    int A[4][4], B[4][4];
    cout<<"Enter the First Matrix...."<<endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter the Second Matrix...."<<endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>B[i][j];
        }
    }

    mult(A,B);
return 0;
}

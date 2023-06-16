#include <iostream>
using namespace std;
void leftRotatebyOne(int arr[], int n)
{
int temp = arr[0], i;
for (i = 0; i < n - 1; i++)
arr[i] = arr[i + 1];
arr[n-1] = temp;
}
void leftRotate(int arr[], int d, int n)
{
for (int i = 0; i < d; i++)
leftRotatebyOne(arr, n);
}
void printArray(int arr[], int n)
{
for (int i = 0; i < n; i++)
cout << arr[i] << " ";
}
int main()
{
int n,a;
cout<<"Enter the number of elements in the array: ";
cin>>n;
int arr[n];
cout<<"Enter the elements of array: ";
for(int i=0 ; i<n ; i++)
{
 cin>>arr[i];
}
cout<<"Enter the number of times you want to rotate the array: ";
cin>>a;
leftRotate(arr, a, n);
printArray(arr, n);
return 0;
}

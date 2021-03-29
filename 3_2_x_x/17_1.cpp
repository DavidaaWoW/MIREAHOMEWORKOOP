#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
class cl1
{
public:
cl1(int a)
{
int *arr = new int[a];
for(int b = 0; b<a; b++)
{
arr[b] = b*b;
}
this -> print(arr,a);
}
void print(int arr1[], int k)
{
if(k>=5&&k<=20)
{
for( ; k>0; k--)
{
cout.width(5);cout<<arr1[k-1];
}
}
}
~cl1()
{
}
};
int main()
{
        int a;
        cin>>a;
        cl1 *obj1 = new cl1(a);
        delete obj1;
        return(0);
}

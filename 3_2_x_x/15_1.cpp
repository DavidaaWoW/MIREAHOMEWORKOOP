#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
class cl1;
class cl2
{
int m,n;
public:
void put(int o, int p)
{
m = o;
n = p;
}
void compare(cl1 & value);
};
class cl1
{
int k;
public:
cl1(int l)
{
k = l;
}
friend void cl2::compare(cl1&value);
};
void cl2::compare(cl1 & value)
{
        cout<<"max = ";
if(value.k>m)
{
if(value.k>n)
{
cout<< value.k;
}
        else
        {
        cout<<n;
        }
}
        else
        {
        if(m>n)
        {
        cout<<m;
        }
                else
                {
                cout<<n;
                }
        }
}
int main()
{
        int first,second,third;
        cin>>first;
        cl1 obj1(first);
        cin>>second>>third;
        cl2 obj2;
        obj2.put(second,third);
        obj2.compare(obj1);
        return(0);
}

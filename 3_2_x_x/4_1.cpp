#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
class cl1
{
public:
cl1()
{
cout<<"Constructor"<<endl;
}
~cl1()
{
cout<<"Destructor";
}
};
int main()
{
        cl1 obj;
        return(0);
}

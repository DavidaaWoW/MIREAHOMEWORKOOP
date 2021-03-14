#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

class cl1
{
int n;
public:
void put(int value)
{
n = value;
this->print1(n);
this->print2(this->count(abs(n)));
}
int count(int k)
{
int temp = 0;
if(k==0)
return 1;
while(k>0)
{
k/=10;
temp++;
}
return temp;
}
void print1(int k)
{
cout<<"n = "<<k << endl;
}
void print2(int k)
{
cout<<"N = " << k;
}
};

int main()
{
	int value;
	cin>>value;
	cl1 obj1;
	obj1.put(value);
	return(0);
}

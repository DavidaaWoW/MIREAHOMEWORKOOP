#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

class cl1
{
long long int n;
public:
int count(long long int k)
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
void print1(long long int k)
{
cout<<"n = "<<k << endl;
}
void print2(int k)
{
cout<<"N = " << k;
}
void put(long long int value)
{
n = value;
this->print1(n);
this->print2(this->count(abs(n)));
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

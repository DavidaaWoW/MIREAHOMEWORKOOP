#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class cl1
{
int temp;
public:
void op(int var1, char sym, int var2)
{
switch (sym)
{
case '+':
temp = var1 + var2;
break;
case '-':
temp = var1 - var2;
break;
case '*':
temp = var1 * var2;
break;
case '%':
temp = var1 % var2;
break;
}
}
void op(char sym, int var)
{
switch (sym)
{
case '+':
temp += var;
break;
case '-':
temp -= var;
break;
case '*':
temp *= var;
break;
case '%':
temp %= var;
break;
}
}
void print()
{
cout<<temp;
}
};

int main()
{
	int first,second,third,fourth;
	char sym1,sym2,sym3;
	cin>>first>>sym1>>second;
	cl1 obj1;
	obj1.op(first,sym1,second);
	cin>>sym2>>third;
	obj1.op(sym2,third);
	cin>>sym3>>fourth;
	obj1.op(sym3,fourth);
	obj1.print();
	return(0);
}


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
        bool checker = true;
        int first,second,var,temp = 1;
        char sym1,sym;
        cin>>first>>sym1>>second;
        cl1 obj1;
        obj1.op(first,sym1,second);
        while(true!=false)
        {
        cin>>sym;
        if(sym!='C')
        {
        temp++;
        cin>>var;
        obj1.op(sym,var);
                if(temp==3)
                {
                        if(checker ==false)
                        cout<<endl;
                        obj1.print();
                        temp = 0;
                        checker = false;
                }
        }
                else
                        return (0);
        }
}

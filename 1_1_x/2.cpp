#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
        int n,temp,Sum_n;
        temp = 1;
        Sum_n = 0;
        cin>>n;
        while(temp<=n)
        {
                Sum_n+=temp;
                temp++;
        }
        if(n>0)
        cout<< "Sum_n = " << Sum_n;
        else
                cout<<"n is wrong (" << n << ")";
        return(0);
}

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
int main()
{
        long long int a;
        int temp = 0;
        std::cin>>a;
        a=std::abs(a);
        if(a == 0)
        {
                std::cout<<"Number of digits: 1";
                return(0);
        }
        while(a>0)
        {
                temp++;
                a/=10;
        }
        std::cout<< "Number of digits: " << temp;
        return(0);
}

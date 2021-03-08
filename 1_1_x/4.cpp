#include <stdlib.h>
#include <stdio.h>
#include <iostream>
int main()
{
        char n;
        std::cin>>n;
        if((n<'A'||n>'Z')&&(n<'a'||n>'z'))
        {
                std::cout<<"Not letter";
        }
        else
        {
        if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U'||n=='Y'||n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='y')
                std::cout<<"vowel";
        else
                std::cout<<"consonant";
        }
        return(0);
}

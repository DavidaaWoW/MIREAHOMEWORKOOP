#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

class triangle
{
private:
int p,q,r,s;
public:
triangle(int a, int b, int c)
{
q=a;
r=b;
s=c;
};
void perimeter()
{
p = q+r+s;
cout << "P = " << p << endl;
}
void square()
{
cout << "S = " << sqrt(p/2*(p/2-q)*(p/2-r)*(p/2-s));
}
};

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	triangle t(a,b,c);
	t.perimeter();
	t.square();
	return(0);
}

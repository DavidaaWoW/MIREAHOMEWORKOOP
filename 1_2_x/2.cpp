#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class cl1
{
public:
cl1(int arr1[], int l)
{
cout << "N = " << l << endl;
for(int a = 0; a<l; a++)
{
cout << arr1[a] << " ";
}
cout << endl;
for( ; l>0; l--)
{
cout << arr1[l-1] << " ";
}
cout << endl;
};
};

int main()
{
	int k;
	cin >> k;
	int *arr = new int[k];
	for(int a =0; a<k; a++)
	{
	cin >> arr[a];
	}
	cl1 obj(arr,k);
	delete arr;
	return(0);
}

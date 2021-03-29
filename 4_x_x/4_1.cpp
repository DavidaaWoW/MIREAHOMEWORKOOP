#include <iostream>

using namespace std;

class cl
{
    public:
    int k;
    int *arr = new int[k];
    void in_out()
    {
        cin>>k;
        for(int a = 0; a<k; a++)
        {
            cin>>arr[a];
        }
    }

};

class cl1 : public cl
{
    public:
    int func()
    {
        int temp = arr[0];
        for(int b = 1; b<k; b++)
        {
            temp -= arr[b];
        }
        return temp;
    }
};

class cl2 : public cl1
{
    public:
    int func()
    {
        int temp = 0;
        for(int b = 0; b<k; b++)
        {
            temp+=arr[b];
        }
        return temp;
    }
};

class cl3 : public cl2
{
public:
    void in_out()
    {
    cout << "Array dimension: " << k << endl;
    cout<<"The original array: ";
    for(int a = 0; a<k; a++)
    {
        cout.width(5);
        cout<<arr[a];
    }
    cout<<endl;
    cout << "Min: " << cl1::func() << endl;
    cout << "Sum: " << cl2::func();
    }
};

int main()
{
    cl3 *obj1 = nullptr;
    obj1 = new cl3();
    obj1 -> cl::in_out();
    obj1 -> cl3::in_out();
    return 0;
}

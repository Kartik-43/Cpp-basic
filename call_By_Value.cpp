#include <iostream>

using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    
    cout<< "The value of A is " << a << " And the value of B is " << b << endl;
    
    swap(a, b);
    
    cout<< "The value of A after swapping using call by value is " << a << " And the value of B after swapping using call by value is " << b << endl;

    return 0;
}

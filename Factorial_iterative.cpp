#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<< "Enter the number you want factorial of :-"<<endl;
    cin>>a;
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {   
        fact *= i;
    }
    
    cout<< "Factorial of " << a << " is "<< fact << endl;

    return 0;
}

#include <iostream>

using namespace std;

float add(float n,float m )
{
    return ( n + m );
}

float sub(float n,float m )
{
    return ( n - m );
}

float mul(float n,float m )
{
    return ( n * m );
}

float div(float n,float m )
{
    return ( n / m );
}


int main()
{
    float n,m;
    char choice;

    cout << "Enter the first number: ";
    cin >> n;
    cout << "Enter the second number: ";
    cin >> m;
    cout << "Enter the operator ==> \n==> +\n==> -\n==> *\n==> /\n=====> ";
    cin >> choice;

    switch (choice)
    {
        case '+':
        cout << "Result: " << add(n,m) << endl;
        break;

        case '-':
        cout << "Result: " << sub(n,m) << endl;
        break;

        case '*':
        cout << "Result: " << mul(n,m) << endl;
        break;

        case '/':
        if (m != 0)
        cout << "Result: " << div(n,m) << endl;
        else
        cout << "Error! Division by zero is not allowed." << endl;
        break;

        default:
        cout << "Error! Invalid operator." << endl;
        break;
    }

    return 0;
}

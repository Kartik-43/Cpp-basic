#include <iostream>

using namespace std;


int firstN(int n)
{
    int sum = 0;

    for(int i = 1; i <= n; ++i) {
        sum += i;
    }

    return sum;
}


int firstEven(int n)
{
    int sum = 0;

    for(int i = 1; i <= n; ++i) {
        sum += 2 * i;
    }

    return sum;
}


int firstOdd(int n)
{
    int sum = 0;

    for(int i = 1; i <= n; ++i) {
        sum += ( ( 2 * i ) - 1 );
    }

    return sum;
}


int main() 
{
    int n, ch, sum;

    cout << "\n\nEnter a positive integer : ";
    cin >> n;

    cout << "\nWhat do you want to calculate ( 1 / 2 / 3 ) :- " << endl;
    cout << "1) SUM of first 'n' Natural Numbers " << endl;
    cout << "2) SUM of first 'n' Even Natural Numbers " << endl;
    cout << "2) SUM of first 'n' Odd Natural Numbers " << endl;

    cin >> ch;

    if (ch == 1)
    {
        sum = firstN(n);
        cout << "The sum of first " << n << " Natural numbers is " << endl;
        cout << sum;
    }
        
    else if (ch == 2)
    {
        sum = firstEven(n);
        cout << "The sum of first " << n << " Even Natural numbers is " << endl;
        cout << sum;
    }
        
    else if (ch == 3)
    {
        sum = firstOdd(n);
        cout << "The sum of first " << n << " Odd Natural numbers is " << endl;
        cout << sum;
    }

    return 0;
}

#include <iostream>

using namespace std;


int Fibo(int n)
{
    if (n == 1 || n == 0)
    {
        return 0;
    }

    else if (n == 2 || n == 3)
    {
        return 1;
    }
    
    else
    {
        return Fibo(n-1) + Fibo(n-2);
    }
}


void PrintFibo(int n)
{
    cout<< "Fibonacci Series upto "<< n << " Number is :- "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<Fibo(i)<<endl;
    }
}


int main()
{
    int nterms;
    cout<< "Fibonacci Series upto "<< endl;
    cin>>nterms;

    PrintFibo(nterms);

    return 0;
}

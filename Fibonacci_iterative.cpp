#include <iostream>

using namespace std;

int main()
{
    int nth, nterms;

    int n1 = 0;
    int n2 = 1;
    int count = 0;

    cout<<"How many terms you want to print : "<<endl;
    cin>>nterms;

    if (nterms <= 0)
    {
        cout<<"Please Enter a Positive Integer"<<endl;
    }

    else if (nterms == 1)
    {
        cout<<"Fibonacci Series upto " <<nterms<< " is :- "<<endl;
        cout<<n1<<endl;
    }

    else
    {
        cout<<"Fibonacci Series upto "<<nterms<<" terms is :- \n"<<endl;

        while (count <= (nterms - 1))
        {
            cout<<n1<<endl;
            nth = (n1 + n2);
            n1 = n2;
            n2 = nth;
            count = count + 1;
        }
    }

    return 0;
}

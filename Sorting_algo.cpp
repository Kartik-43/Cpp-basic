#include <iostream>
using namespace std;

void BubbleSort(int n, int arr[])
{
    for(int i = 0; i < n-1; ++i) 
    {
        for(int j = 0; j < n-i-1; ++j) 
        {
            if(arr[j] > arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted Array (USING BUBBLE SORTING ALGO) :- ";
    for(int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
}

int main() 
{
    int n;
    cout << "Enter number of elements :- ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: " << endl;
    for(int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    BubbleSort(n, arr);

    return 0;
}

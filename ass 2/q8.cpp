#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int Count = 0;

    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }

        if (j == i)
        {
            Count++;
        }
    }

    cout << "Total number of distinct elements = " << Count << endl;

    return 0;
}

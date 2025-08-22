#include <iostream>
using namespace std;

// Linear time
int missingLinear(int arr[], int n)
{
    int total = (n + 1) * (n + 2) / 2; // sum of 1 to n+1
    for (int i = 0; i < n; i++)
    {
        total = total - arr[i];
    }
    return total;
}

// Binary search method
int missingBinary(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] != mid + 1)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low + 1;
}

int main()
{
    int n;
    cout << "Enter size of array (n-1 elements): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements (from 1 to n+1 with one missing): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Missing (Linear method): " << missingLinear(arr, n) << endl;
    cout << "Missing (Binary method): " << missingBinary(arr, n) << endl;

    return 0;
}
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int ns) // ns is number to be searched
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ns)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int ns)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == ns)
            return mid;
        else if (arr[mid] < ns)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter size of array";
    cin >> n;
    int arr[n];
    cout << "enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ns;
    cout << "Enter element to search: ";
    cin >> ns;

    cout << "Linear Search: ";
    int pos1 = linearSearch(arr, n, ns);
    if (pos1 != -1)
        cout << "Found at index " << pos1 << endl;
    else
        cout << "Not Found\n";

    cout << "Binary Search: ";
    int pos2 = binarySearch(arr, n, key);
    if (pos2 != -1)
        cout << "Found at index " << pos2 << endl;
    else
        cout << "Not Found\n";

    return 0;
}
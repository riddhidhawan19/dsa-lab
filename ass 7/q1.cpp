#include <iostream>
using namespace std;
void selectionsort()
{
    int smallestindex = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)

        {
            if (a[j] > a[smallestindex])
            {
                smallestindex = j;
            }
        }
        swap(a[i],a[smallestindex]);
    }
}
void insertionsort()
{
}
void bubblesort()
{
}
void mergesort()
{
}
void quicksort()
{
}

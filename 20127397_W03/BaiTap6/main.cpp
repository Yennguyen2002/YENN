#include <iostream>
using namespace std;

int *Merge(int a[], int a1[], int n, int n1)
{
    int size = n + n1;
    int *arr = new int[size];
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
    for (int i = 0; i < n1; i++)
    {
        arr[n + i] = a1[i];
    }
    return arr;
}

int main()
{
    int n, n1;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a1[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int *arr = Merge(a, a1, 10, 10);
    n = 10;
    n1 = 10;
    for (int i = 0; i < n+n1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
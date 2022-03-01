#include <iostream>
using namespace std;
void input(int *&a, int &n)
{
    cout << "Enter number of array: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter values : " << endl;
        cin >> a[i];
    }
    if (n == 0)
    {
        cout << "INVALID Enter Again!" << endl;
        cout << "Enter number of array: " << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter values : " << endl;
            cin >> a[i];
        }
    }
}

void sortArray(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
                swap(a[j], a[i]);
        }
    }
}

double average(int *a, int n)
{
    int *sum = new int;
    *sum = 0;
    for (int i = 0; i < n; i++)
    {
        *sum += a[i];
    }
    return (double)*sum / n;
}

int main()
{
    int n = 10;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    double res = average(arr, n);
    cout << endl;

    cout << "Output: " << res << endl;
    delete[] arr;
    return 0;
}
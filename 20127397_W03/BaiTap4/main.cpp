#include <iostream>
using namespace std;

void input(int *&a, int &n)
{
    cout << "Enter number of array: " << endl;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter values : "<< endl;
        cin >> a[i];
    }
        if (n == 0){
        cout << "INVALID Enter Again!" << endl;
        cout << "Enter number of array: " << endl;
        cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter values : "<< endl;
        cin >> a[i];
    }
    }
}

int check(int *a, int n)
{
    int checkArr = -1;
    int temp = 0, same ;
    for (int i = 0; i < n - 1; i++)
    {
        same = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                same++;
            }
            {
                if (same > temp)
                {
                    checkArr = a[i];
                }
            }
        }
    }
    return checkArr;
}



int main()
{
    int n;
    int *arr = new int[n];
    input(arr,n);
    int checkArr = check(arr,n);
    cout << "Output: " << checkArr<< endl;
    delete [] arr;
    return 0;
}
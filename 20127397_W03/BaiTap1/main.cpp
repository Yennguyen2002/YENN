#include <iostream>
using namespace std;

void addOne(int *ptrNum)
{
    *ptrNum += 1;
}

int main()
{
    int * ptrNum = new int;
    *ptrNum = 10;
    addOne(ptrNum);
    cout << *ptrNum << endl;
    return 0;
}
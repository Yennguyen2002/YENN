#include <iostream>
using namespace std;
int doSomething(int &x, int &y) {
    int temp = x;
    x =y*10;
    y = temp *10;
    return x+y;
}

int main()
{
    int *x = new int;
    int *y = new int;
    *x = 10;
    *y = 20;
    cout << doSomething(*x, *y) << endl;
    return 0;
}
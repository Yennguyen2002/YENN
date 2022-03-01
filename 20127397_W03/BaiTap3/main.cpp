#include "header.h"
#include "B01_W03.cpp"
using namespace std;

int main()
{
    char *xau = new char[50];
    cout << isPalindrome(xau);
    delete[] xau;
}
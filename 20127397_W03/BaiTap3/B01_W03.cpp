#include "header.h"

bool isPalindrome(char *xau)
{
    cout << "Nhap xau : " << endl;
    cin >> xau;

    char* front = xau;
    char* back = xau + strlen(xau)-1;
    while (front < back)
    {
        if (*front != *back)
            return false;
            front = front + 1;
            back = back - 1;
    }
    return true;

}
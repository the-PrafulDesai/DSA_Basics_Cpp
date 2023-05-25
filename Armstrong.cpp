#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, rem;
    int c = 0;
    cin >> n;

    int temp = n; // Store the original value of n

    while (n > 0)
    {
        rem = n % 10;
        c += pow(rem, 3);
        n = n / 10;
    }

    if (temp == c) // Compare the original value with the calculated sum
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}

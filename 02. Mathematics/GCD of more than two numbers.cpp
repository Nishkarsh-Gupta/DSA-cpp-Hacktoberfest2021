//GCD of more than two numbers

#include <bits/stdc++.h>
using namespace std;

//function to get gcd of two numbers
int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

//function to get gcd of more than two elements using gcd function
int gcdofarray(int a[], int n)
{
    int gcdresult = gcd(a[0], a[1]);
    for (int i = 2; i < n; i++)
    {
        gcdresult = gcd(gcdresult, a[i]);
    }
    return gcdresult;
}

int main()
{
    int a[] = {4, 8, 12};
    int n = sizeof(a) / sizeof(a[0]);
    cout << gcdofarray(a, n) << endl;
    return 0;
}

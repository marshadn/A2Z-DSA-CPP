#include <bits/stdc++.h>
using namespace std;

void func(int i, int n)
{

    // Base Condition.
    if (i < 1)
        return;

    // Function call to print (n-1) integers.
    func(i - 1, n);
    cout << i << endl;
}

int main()
{

    // Here, let’s take the value of n to be 4.
    int n = 4;
    func(n, n);
    return 0;
}
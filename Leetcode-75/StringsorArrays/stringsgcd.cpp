#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

string gcdOfStrings(string str1, string str2)
{
    if (str1 + str2 != str2 + str1)
        return "";
    return str1.substr(0, gcd(str1.size(), str2.size()));
}
int main()
{
    string str1, str2;
    str2 = "ABABAB";
    str1 = "ABAB";
    cout << gcdOfStrings(str1, str2);
    return 0;
}
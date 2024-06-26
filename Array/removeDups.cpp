#include <bits/stdc++.h>
using namespace std;
// int isNodups(vector<int> &arr, int n)
// {
//     set<int> st;
//     for (int i = 0; i < n; i++)
//     {                                           // o(n logn)
//         st.insert(arr[i]);
//     }
//     int index = 0;
//     for (auto it : st)
//     {
//         arr[index] = it;   // o(n)
//         index++;
//     }
//     return index;
//}
int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // isNodups(arr, n);
    // cout << isNodups(arr, n) << endl;
    cout << removeDuplicates(arr, n) << endl;
}
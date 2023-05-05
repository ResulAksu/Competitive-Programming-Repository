#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> map;
    int n, i, a, b, arr[200100];
    cin >> n;
    for (; i < n; i++)
    {
        cin >> arr[i];
        map[arr[i]] = map[arr[i] - 1] + 1;
        if (map[arr[i]] > a)
            a = map[arr[i]], b = arr[i];
    }
    cout << a << endl;
    b -= a - 1;
    for (i = 0; i < n; i++)
        if (arr[i] == b)
            cout << i + 1 << ' ', b++;
}
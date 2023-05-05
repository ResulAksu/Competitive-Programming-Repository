#include <bits/stdc++.h>
using namespace std;
int detNumb(int num);
int main()
{
    int n;
    cin >> n;
    int i;
    int A[n];

    for (i = 0; i < n; i++)

        cin >> A[i];

    int max_current, max_global;
    int count = 0;
    if (A[0] == 1)
    {
        max_current = -1;
        max_global = -1;
        count++;
    }
    else if (A[0] == 0)
    {
        max_current = 1;
        max_global = 1;
    }

    for (i = 1; i < n; i++)
    {
        max_current = max(detNumb(A[i]), max_current + detNumb(A[i]));
        max_global = max(max_global, max_current);
        if (A[i] == 1)
            count++;
    }
    int ao = count + max_global;
    cout << ao << endl;
}

int detNumb(int num)
{
    if (num == 1)
    {
        return -1;
    }
    return 1;
}
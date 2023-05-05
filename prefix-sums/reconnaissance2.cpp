#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int min_diff = 10000;
    int i;

    int index_a;
    int index_b;
    cin >> n;

    int A[n];
    int j = 1;

    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (i = 0; i < n; i++)
    {
        if (j == n - 1)
        {
            if ((abs(A[i] - A[(j)]) < min_diff))
            {
                min_diff = abs(A[(i + 1) % n] - A[i]);

                index_a = i + 1;
                index_b = j + 1;
            }
            if (abs(A[0] - A[(j)]) < min_diff)
            {
                index_a = j + 1;
                index_b = 1;
            }
            break;
        }
        if (abs(A[i] - A[(j)]) < min_diff)
        {

            min_diff = abs(A[(i + 1) % n] - A[i]);

            index_a = i + 1;
            index_b = j + 1;
        }
        j++;
    }

    cout << index_a << " " << index_b << endl;
}
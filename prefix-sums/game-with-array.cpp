#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    ll s;
    ll n;
    cin >> n >> s;

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (s % n == 0)
    {
        if (s == n)
        {
            cout << "NO" << endl;
            return 0;
        }
        ll a[n];
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            a[i] = s / n;
            cout << s / n << " ";
        }
        cout << endl;
        cout << s - 1 << endl;
        return 0;
    }

    if (s % 2 == 0)
    {
        if (s == 2)
        {
            cout << "NO" << endl;
        }

        ll a[n];
        ll leftover = s;
        int i = 0;
        for (i = 0; i < n; i++)
        {
            leftover = leftover - 2;
            a[i] = 2;
        }
        a[i - 1] = leftover + 2;

        if (a[i - 1] <= 0)
        {
            cout << "NO" << endl;
            return 0;
        }

        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << a[i - 1] - 1 << endl;
    }

    if (s % 2 == 1)
    {
        if (n == 1)
        {
            cout << "YES" << endl;
            cout << s << endl
                 << s - 1 << endl;
            return 0;
        }
        ll a[n];
        ll leftover = s;
        int i = 0;
        for (i = 0; i < n; i++)
        {
            leftover = leftover - 2;
            a[i] = 2;
        }
        a[i - 1] = leftover + 2;

        ll calc = 0;
        int j = 0;
        while (a[j] == 2)
        {
            calc = calc + 2;
            j++;
        }

        if (calc == s - 1)
        {
            cout << "NO" << endl;
            return 0;
        }
        if (a[i - 1] < 0)
        {
            cout << "NO" << endl;
            return 0;
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << s - 1 << endl;
        return 0;
    }
}
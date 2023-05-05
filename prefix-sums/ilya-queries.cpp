#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int m;
    cin >> s >> m;

    int vorkommen[100005];
    int cntforsame;
    int j = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[j])
        {
            cntforsame++;
        }

        vorkommen[i] = cntforsame;
        j++;
    }

    int leftP;
    int rightP;
    while (m--)
    {
        cin >> leftP >> rightP;

        cout << vorkommen[rightP - 1] - vorkommen[leftP - 1] << endl;
    }
}
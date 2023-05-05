#include <bits/stdc++.h>

using namespace std;

using ll = long long;


int main() {
    ll i, n, t, a, b;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    //meisten zahlen sind bis 30 teilbar
    ll endpoint = 30;

    for (i = 0; i < t; i++) {
        cin >> n;
        if(endpoint > n){
            endpoint = n;
        }
        for (ll j = 2; j <= endpoint; j++) {

            if (endpoint == j) {
                a = (n - 1) / 2 - 1;
                b = (n - 1) / 2 + 1;
                if (a % 2 == 0 && b % 2 == 0) {
                    cout << a - 1 << " " << b + 1 << " " << 1 << endl;
                } else {
                    cout << a << " " << b << " " << 1 << endl;
                }
                break;
            }
            if (n % j == 0) {
                cout << (n - (j + 1)) << " " << j << " " << 1 << endl;
                break;
            }
        }
    }


    return 0;
}

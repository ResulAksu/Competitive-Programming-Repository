
#include <bits/stdc++.h>

#define Speed ios_base::sync_with_stdio(0); \
cin.tie(0);\
cout.tie(0);

using namespace std;

using ll = long long;

const int M = 100000000;
const int N = 100000;




int main() {
  ll n;
  Speed;
  cin >> n;
  vector<ll> count(100005,0);
  while (n-- > 0) {
      ll x;
      cin >> x;
      count[x]++;
  }


  ll v2 = count[0]; // [i-2], at start index 0
  ll v1 = count[1]; // [i-1], at start index 1

  ll currMax;

  for(ll i = 2; i<= 100000; i++){
      currMax = max(v1,v2+count[i]*i);
      /* You take the max out of the window from i[0],i[1],i[2] -> because if you  want to take the points from i[1] you delete i[0], i[2] */
      v2 = v1;
      v1 = currMax;
  }

  cout << v1 << endl;

  return 0;
}

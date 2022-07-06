#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MAXN = 2e5 + 10;
ll n, m, tmp, x, arr[MAXN];

ll upperBound(ll arr[], ll n, ll x) {
  int l = -1, r = n;
  while (l + 1 < r) {
    int mid = (l + r) / 2;
    if (arr[mid] > x) {
      r = mid;
    } else {
      l = mid;
    }
  }
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> x;
    tmp = upperBound(arr, n, x);
    if (tmp < n) {
      cout << arr[tmp] << '\n';
    } else {
      cout << "NO SOLUTION\n";
    }
  }
  return 0;
}
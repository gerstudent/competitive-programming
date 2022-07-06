#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x;
  cin >> n >> m;
  while (m--) {
    cin >> x;
    int l = -1, r = n, cnt = 0;
    while (l + 1 < r) {
      int mid = (l + r) / 2;
      mid < x ? l = mid : r = mid;
      cnt++;
    }
    cout << cnt << '\n';
  }
  return 0;
}
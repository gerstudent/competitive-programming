#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x, idx = 0;
  cin >> n >> m;
  int l = -1, r = n;
  while (idx < m && l + 1 < r) {
    cin >> x;
    int mid = (l + r) / 2;
    x == 0 ? l = mid : r = mid;
    idx++;
  }
  cout << r << '\n';
  return 0;
}
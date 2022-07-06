#include <bits/stdc++.h>
using namespace std;

using ld = long double;
const ld EPS = 1e-12;

struct Circle {
  ld cx, cy, R;
  Circle(ld cx, ld cy, ld R) : cx(cx), cy(cy), R(R) {}
  Circle() {}
};

ld f(ld x, vector<ld>& arr, int n) {
  ld cnt = 0.0;
  size_t power = arr.size() - 1;
  for (size_t i = 0; i < arr.size(); ++i) {
    cnt += pow(x, power--) * arr[i];
  }
  return cnt;
}

bool inCircle(ld x, Circle& c, vector<ld>& arr, int n) {
  ld fun = f(x, arr, n);
  bool inside = pow(x - c.cx, 2) + pow(fun - c.cy, 2) <= c.R * c.R;
  return inside;
}

ld binSearch(ld x, Circle& c, vector<ld>& arr, int n) {
  ld l = x, r = x + c.R * 2.0;
  while (r - l > EPS) {
    ld mid = (l + r) / 2.0;
    if (inCircle(mid, c, arr, n)) {
      l = mid;
    } else {
      r = mid;
    }
  }
  return (l + r) / 2.0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  Circle c;
  cin >> c.cx >> c.cy >> c.R;
  int n;
  cin >> n;
  vector<ld> arr(n + 1);
  for (size_t i = 0; i < arr.size(); ++i) {
    cin >> arr[i];
  }
  ld x;
  cin >> x;
  cout << fixed << setprecision(16) << binSearch(x, c, arr, n);
}

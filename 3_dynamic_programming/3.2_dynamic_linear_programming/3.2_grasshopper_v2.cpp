#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> dp;

int f(int i) {
  if (i < 0) {
    return 0;
  }
  if (i == 0) {
    return 1;
  }
  if (dp[i] != -1) {
    return dp[i];
  }
  if (a[i] == 0) {
    return 0;
  } else {
    dp[i] = f(i - 1) + f(i - 2) + f(i - 3);
    return dp[i];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  a.resize(n + 1);
  dp.assign(n + 1, -1);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  cout << f(n) << '\n';
  return 0;
}
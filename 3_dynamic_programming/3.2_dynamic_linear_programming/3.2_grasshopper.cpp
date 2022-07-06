#include <bits/stdc++.h>
using namespace std;

long long main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  long long a[n + 1];
  long long dp[n + 1];
  for (long long i = 1; i <= n; ++i) {
    cin >> a[i];
  }
  dp[0] = 0;
  dp[1] = a[1];
  for (long long i = 2; i <= n; ++i) {
    dp[i] = max(dp[i - 1], dp[i - 2]) + a[i];
  }
  cout << dp[n] << "\n";
  return 0;
}
/*
    Created by gerstudent
*/

#include <bits/stdc++.h>

#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, x;
  cin >> n;
  vector<long long> dp(n + 1);
  for (long long i = 1; i <= n; ++i) {
    cin >> x;
    dp[i] = max(max(dp[i - 1], i - 3 >= 0 ? dp[i - 3] : dp[i - 1]),
                i - 5 >= 0 ? dp[i - 5] : dp[i - 1]) +
            x;
  }
  cout << dp[n] << "\n";
  return 0;
}
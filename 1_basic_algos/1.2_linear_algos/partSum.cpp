#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000500;
int n, q, num;
long long partSum[MAXN];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  partSum[0] = 0;
  for (int i = 1; i <= n; ++i) {
    cin >> num;
    partSum[i] = partSum[i - 1] + num;
  }

  cin >> q;
  for (int i = 0; i < q; ++i) {
    int l, r;
    cin >> l >> r;
    cout << partSum[r] - partSum[l - 1] << "\n";
  }
  return 0;
}

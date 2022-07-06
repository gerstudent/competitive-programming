/*
    Created by gerstudent
*/

#include <bits/stdc++.h>
using namespace std;

const int mod = 1791791791;
const int MAXV = 1000000500;
const int MAXN = 10000005;
const int INDEX = 0;

long long n, cur, a, b;
long long arr[MAXN];

long long NextRand() {
  cur = (cur * a + b) % mod;
  return cur;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  cin >> cur >> a >> b;
  long long max1 = -MAXV, max2 = -MAXV, idmax1 = INDEX, idmax2 = INDEX;

  for (int i = 0; i < n; ++i) {
    arr[i] = NextRand();
    if (max1 < arr[i]) {
      max1 = arr[i];
      idmax1 = i;
    }
  }

  for (int i = 0; i < n; ++i) {
    if (i != idmax1 && max2 < arr[i]) {
      max2 = arr[i];
      idmax2 = i;
    }
  }

  cout << idmax1 + 1 << ' ' << idmax2 + 1 << "\n";
  return 0;
}
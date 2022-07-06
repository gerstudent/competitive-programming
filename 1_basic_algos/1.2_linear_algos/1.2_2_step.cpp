/*
    Created by gerstudent
*/

#include <bits/stdc++.h>
using namespace std;

long long n, num, cnt = 0;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for (long long i = 0; i < n; ++i) {
    cin >> num;
    cnt += num;
  }
  cout << cnt << "\n";
  return 0;
}
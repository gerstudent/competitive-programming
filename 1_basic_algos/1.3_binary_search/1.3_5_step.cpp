#include <bits/stdc++.h>
using namespace std;

bool isNumIn(const int arr[], int n, int x) {
  int l = -1, r = n;
  while (l + 1 < r) {
    int mid = (l + r) / 2;
    arr[mid] < x ? l = mid : r = mid;
  }
  return (r < n && arr[r] == x);
}

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  while (m--) {
    int x;
    cin >> x;
    isNumIn(arr, n, x) ? cout << "YES" << '\n' : cout << "NO" << '\n';
  }
}
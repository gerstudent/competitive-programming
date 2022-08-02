#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<pair<int, int>> graph;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      char edge;
      cin >> edge;
      if (i <= j && edge == '1') {
        graph.emplace_back(i, j);
      }
    }
  }
  cout << graph.size();
  for (auto it : graph) {
    cout << '\n' << it.first << ' ' << it.second;
  }
  return 0;
}
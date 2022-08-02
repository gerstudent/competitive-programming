#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<vector<int>> graph(n, vector<int>(0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char edge;
      cin >> edge;
      if (edge == '1') {
        graph[i].push_back(j + 1);
      }
    }
  }

  for (auto& i : graph) {
    cout << i.size() << ' ';
    for (auto& j : i) {
      cout << j << ' ';
    }
    cout << '\n';
  }
  return 0;
}
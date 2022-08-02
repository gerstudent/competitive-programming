#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<vector<int>> graph(n);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    graph[u - 1].push_back(v);
    graph[v - 1].push_back(u);
  }
  for (int i = 0; i < n; i++) {
    cout << graph[i].size() << ' ';
    sort(graph[i].begin(), graph[i].end());
    for (int j = 0; j < (int)graph[i].size(); j++) {
      cout << graph[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
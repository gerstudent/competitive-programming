#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<vector<int>> graph(n + 1, vector<int>(n + 1));
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    graph[u][v] = graph[v][u] = 1;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << graph[i][j];
    }
    cout << '\n';
  }
  return 0;
}
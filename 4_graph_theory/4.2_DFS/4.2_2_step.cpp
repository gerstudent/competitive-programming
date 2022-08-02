#include <bits/stdc++.h>
using namespace std;

void dfs(int v, vector<vector<int>>& graph, vector<int>& used,
         vector<int>& ans) {
  used[v] = 1;
  ans.push_back(v + 1);
  for (auto u : graph[v]) {
    if (!used[u]) {
      dfs(u, graph, used, ans);
      ans.push_back(v + 1);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, v;
  cin >> n >> m;
  vector<vector<int>> graph(n);
  vector<int> used(n), ans;
  
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    graph[u - 1].push_back(v - 1);
    graph[v - 1].push_back(u - 1);
  }
  cin >> v;
  
  dfs(v - 1, graph, used, ans);
  
  cout << ans.size() << '\n';
  for (auto i : ans) {
    cout << i << ' ';
  }
}
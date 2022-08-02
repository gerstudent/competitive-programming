#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef vector<vector<int>> vvi;
typedef vector<int> vi;

vvi g;
vector<bool> used;
vi comp;

void dfs(int v, int cnt) {
  used[v] = true;
  comp[v] = cnt;
  for (auto u : g[v]) {
    if (!used[u]) {
      dfs(u, cnt);
    }
  }
}

void find(int n, int& cnt) {
  for (int i = 0; i < n; i++) {
    if (!used[i]) {
      cnt++;
      dfs(i, cnt);
    }
  }
}

int main() {
  int n, m, cnt = 0;
  cin >> n >> m;
  g.resize(n);
  comp.resize(n);
  used.resize(n, false);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    g[u - 1].pb(v - 1);
    g[v - 1].pb(u - 1);
  }

  find(n, cnt);

  cout << cnt << '\n';
  for (auto it : comp) {
    cout << it << ' ';
  }
  return 0;
}

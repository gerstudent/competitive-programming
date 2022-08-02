#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<vector<int>> graph(n + 1, vector<int>(n + 1));
  for (int i = 1; i <= n; i++) {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++) {
      int v;
      cin >> v;
      graph[i][v] = 1;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << graph[i][j];
    }
    cout << '\n';
  }
  return 0;
}
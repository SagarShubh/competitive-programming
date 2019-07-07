#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5, M = 1e6 + 6, LG = 20;
int a[M], b[M], e[M];
int id[M];

int p[N];
int find(int x) {
  return p[x] < 0 ? x : p[x] = find(p[x]);
}

bool merge(int u, int v) {
  u = find(u);
  v = find(v);
  if (u == v)
    return false;
  if (-p[u] < -p[v])
    swap(u, v);
  p[u] += p[v];
  p[v] = u;
  return true;
}

int par[LG][N], w[LG][N];
vector<pair<int, int> > g[N];
int lv[N];
int ans[M];

void dfs(int v, int pp = -1) {
  lv[v] = pp == -1 ? 0 : lv[pp] + 1;
  par[0][v] = pp == -1 ? v : pp;
  for (int i = 0; i + 1 < LG; ++i) {
    par[i+1][v] = par[i][par[i][v]];
    w[i+1][v] = max(w[i][v], w[i][par[i][v]]);
  }
  for (auto it : g[v]) {
    if (it.first == pp) continue;
    w[0][it.first] = it.second;
    dfs(it.first, v);
  }
}

int get_max(int u, int v) {
  if (lv[u] > lv[v])
    swap(u, v);
  int diff = lv[v] - lv[u];
  int ret = 0;
  for (int i = 0; i < LG; ++i) {
    if (diff & (1 << i)) {
      ret = max(ret, w[i][v]);
      v = par[i][v];
    }
  }
  if (u == v)
    return ret;
  for (int i = LG-1; i >= 0; --i) {
    if (par[i][u] != par[i][v]) {
      ret = max(ret, max(w[i][u], w[i][v]));
      u = par[i][u];
      v = par[i][v];
    }
  }
  return max(ret, max(w[0][u], w[0][v]));
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; ++i) {
    scanf("%d %d %d", a+i, b+i, e+i);
  }
  iota(id, id+m, 0);
  sort(id, id+m, [](int l, int r) {
    return e[l] < e[r];
  });
  memset(p, -1, sizeof p);
  for (int i = 0; i < m; ++i) {
    int cur = id[i];
    if (merge(a[cur], b[cur])) {
      ans[cur] = -1;
      g[a[cur]].emplace_back(b[cur], e[cur]);
      g[b[cur]].emplace_back(a[cur], e[cur]);
    }
  }
  dfs(1);
  for (int i = 0; i < m; ++i) {
    if (ans[i] == -1) continue;
    ans[i] = get_max(a[i], b[i]);
    printf("%d\n", ans[i]);
  }
  return 0;
}

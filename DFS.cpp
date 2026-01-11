#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
vector<int>adj[mx];
bool vis[mx];
int cnt;
//my dfs mechine
void dfs (int u) {
        vis[u]=1;
        for (auto v : adj[u]){
            if (vis[v]==0){ //check dilam j visited kina
                    cnt++;
                dfs(v);   // na hole dfs mechine e back korbe
            }
        }
         return;  // kothao jaite na parle ager tay backtrack korbe
}
int main(){
  int n, m;  //n = nodes, m = edge
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v;    // ekta edge er 2 ta node
    cin >> u >> v;
    adj[u].push_back(v);   // 1-----2
    adj[v].push_back(u);   // 2-----1
  }

            int ans = 0;  // maximum size count korar jonno nicilam
            int total_components = 0;   //  counting number of components in a graph
            for (int i = 1; i <= n; i++){
                    if (!vis[i]){
                        total_components++;   //  counting number of components in a graph
                        cnt=0;    //new component e gele sathe sathe notun kore count suru hobe
                        dfs(i);
                          ans = max(ans,cnt);   //maximum size of a components
                    }
            }
             cout << total_components << endl;
            cout << ans << endl;
return 0;
}

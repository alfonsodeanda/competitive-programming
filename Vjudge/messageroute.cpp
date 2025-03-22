#include <bits/stdc++.h>
using namespace std;
#define ll long long

void bfs(vector<vector<ll>>& adj, ll s) {
    queue<int> q;  

    vector<bool> visited(adj.size(), false);

    visited[s] = true;
    q.push(s);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int x : adj[curr]) {
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

void addEdge(vector<vector<ll>>& adj, ll u, ll v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    ll n; cin >> n;
    ll m; cin >> m;
    vector<vector<ll>> adj(n + 1);

    for(ll i=0; i<m; ++i){
        ll a; cin >> a;
        ll b; cin >> b;
        addEdge(adj, a, b);
    }

    bfs(adj, 1);

    for (ll i = 1; i < adj.size(); i++) {
        cout << i << ": "; 
        for (ll j : adj[i]) {
            cout << j << " "; 
        }
        cout << endl; 
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define infinite 1e6
#define N 100001

int n;

vector<vector<int>> AL(N);

void dijkstra(int start){
    queue<int>q;
    vector<int>dist(n + 1, infinite);

    q.push(start);
    dist[start] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : AL[u]){
            if(dist[v] <=dist[u] + 1) continue;
            dist[v] = dist[u] + 1;
            q.push(v);
        }
    }

    //cout << dist[n];
}

int main(){
    cin>>n;
    int m; cin>>m;
    
    for(int i = 1; i <= m; i++) {
        int u, v; cin >> u >> v;
        AL[u].push_back(v);
        AL[v].push_back(u);
    }

    return 0;
}
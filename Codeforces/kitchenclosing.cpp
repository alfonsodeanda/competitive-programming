#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m, o; cin>>n>>m>>o;

    vector <int> ingredients;

    vector <vector<pair<int, int>>> dishes(m);

    for (int i=0; i<n; i++){
        int ni; cin>>ni;
        ingredients.push_back(ni);
    }

    for(int i=0; i<m; i++){
        int M; cin>>M;
        for (int j=0; j<M; j++){
            int ing, qua; cin>>ing>>qua;
            ing--;
            dishes[i].push_back({ing, qua});
        }
    }

    int x=0;
    bool flag=true;

    while(o--){
        int O; cin>>O;
        while(O--){
            int d; cin>>d; d--;
            if(!flag) continue;
            for(auto item : dishes[d]){
                if(item.second > ingredients[item.first]){
                    flag=false;
                    break;
                }    
                ingredients[item.first] -= item.second;
            }
        }

    if(!flag) continue;

    x++;
    }



    cout<<x<<'\n';

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    map <string, int> map;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        if(map.find(s) == end(map)) {
            map.insert({s, 1});
            cout << "OK" <<'\n';
        }
        else cout << s << map[s]++ <<'\n';
    }
    return 0;
}
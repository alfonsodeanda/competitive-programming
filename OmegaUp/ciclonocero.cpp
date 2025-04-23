#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int sum = 0;
    for(int i = 0; i<10000; i++){
        int n; cin>>n;
        if(n == 0) break;
        sum+=n;
    }
    cout<<sum<<'\n';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int n; cin>>n;
    cout<<n/(50 * 70 * 12)<<" ";
    n = n%(50 * 70 * 12);
    cout<<n/(50*70)<<" ";
    n = n%(50 * 70);
    cout<<n/50<<" ";
    n = n%50;
    cout<<n<<" ";
    return 0;
}
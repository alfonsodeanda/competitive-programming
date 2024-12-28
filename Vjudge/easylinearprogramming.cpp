#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b, c, k; cin >> a >> b >> c >> k;
    int a1, b1, c1=0;
    a1=1*a;
    b1=0*b;
    c1=-1*c;
    int x=0;
    while(k>0){
        if(a>0){
            x++;
            a--;
        }
        else if(b>0){
            b--;
        }
        else if (c>0){
            x--;
            c--;
        }
        k--;
    }
    cout<<x;
    return 0;
}
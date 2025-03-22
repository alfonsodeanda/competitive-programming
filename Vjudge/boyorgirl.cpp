#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    cin >> str;
    set <char> st;
    for (char c : str){
        st.insert(c);
    }
    ll x = st.size();
    if(x % 2 == 0){
        cout<<"CHAT WITH HER!"<<'\n';
    } else{
        cout<<"IGNORE HIM!" << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, k; cin >> n >>k;

    vector<int> recepie;
    for(int i=0; i<n; i++){
        int ing; cin>>ing;
        recepie.push_back(ing);
    }
    
    vector<int> grams;
    for(int i=0; i<n; i++){
        int ing; cin>>ing;
        grams.push_back(ing);
    }

    int x=0;
    for(int i=0; i<n; i++){
        while(grams[i]>=recepie[i]){
            grams[i]-=recepie[i];
            x++;
        }
        if(k+grams[i]>=recepie[i]){
            x++;
        }
    }

    cout<<x;
    return 0;
}
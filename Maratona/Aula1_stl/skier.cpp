#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >> t;
    vector<vector<string>> path; 
    for(int i=0; i<t; i++){
        string str; cin >> str; 
        for(int j=0; j<str.size(); j++){
            path[i].push_back(str[j]);
        }
    }
}

int main(){
    solve();
}
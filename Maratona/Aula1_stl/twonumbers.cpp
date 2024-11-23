#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    int A[100];
    for(int i=0; i<n; i++) cin >> A[i];
    
    int m; cin >> m;
    int B[100];
    for(int i=0; i<m; i++) cin >> B[i];
    
    set<pair<int, int>> par;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int sum = A[i] + B[j];
            bool cont = true;
            bool cont_ = true;

            for(int k=0; k<n; k++){
                if(sum == A[k]) {
                    cont = false;
                    break;
                } 
            }
            if(cont == true){
                for(int y = 0; y<m; y++){
                    if(sum == B[m]) break;
                    cont_ = false;
                }
            }
            if(cont && cont_){
                par.insert({A[i], B[j]});
            }
        }
    }
    for(int i=0; i<par.size(); i++) cout << par[i].first << par[i].second;
}

int main(){
    solve();
}
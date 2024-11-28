#include<bits/stdc++.h>
using namespace std; 

void solve(){
    vector<int> A; 
    vector<int> B; 
    int n; cin >> n; 
    for(int i=0; i<n; i++){
        int k; cin >> k;
        A.push_back(k);
    }
    int m; cin >> m;
    for(int i=0; i<m; i++){
        int k; cin >> k;
        B.push_back(k);
    }
    
    vector<int> aux; 
    for(int i=0; i<A.size(); i++){
        aux.push_back(A[i]);
    }
    for(int i=0; i<B.size(); i++){
        aux.push_back(B[i]);
    }

    int count;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<B.size(); j++){
            count = 0;
            for(int k=0; k<aux.size(); k++){
                if(A[i] + B[j] == aux[k]){
                    break;
                }
                else count++;
            }
            if(count == aux.size()){
                cout << A[i] << " " << B[j] << endl; 
                return;
            }
        }
    }
}


int main(){
    solve();
}
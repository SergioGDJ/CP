#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    
    string str; cin >> str;
    vector<int> letters(26,0);
    // cout << str << endl;
    for(int i=0; i<str.size(); i++){
        letters[str[i] - 'a']++;
    }
    // for(int i=0; i<letters.size(); i++) cout << letters[i] << " ";
    // cout << endl;
    
    int zeros=0;
    while(letters[25] != 0){
        zeros++; 
        letters[25]--;
    }
    int ones=0;
    while(letters[13] != 0){
        ones++;
        letters[13]--;
    }
    for(int i=0; i<ones; i++) cout << "1 ";
    for(int i=0; i<zeros; i++) cout << "0 ";
    cout << endl;
}

int main(){
    solve();
}
#include<bits/stdc++.h>
using namespace std;

string to_lower(string s){
	for(int i=0; i<s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32; 
		s[i] = s[i] - 'a';
	}
	return s;
}

bool is_ordened(string s){
	for(int i=1; i<s.size(); i++){
		if(s[i] <= s[i-1]) return false;
	}
	return true;
} 

void solve(string s){
	string p = s;
	s  = to_lower(s);
	if(is_ordened(s)){
		cout << p << ": " << "O" << "\n";
	}
	else cout << p << ": " << "N" << "\n";
}

int main(){
	int p; cin >> p;
	while(p--){
		string s; cin >> s;
		solve(s);
	}
}

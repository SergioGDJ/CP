#include<bits/stdc++.h>
using namespace std; 

int main(){
	string joia;  
	set<string> tesouro; 
	while(cin >> joia){ //while !EOF
		tesouro.insert(joia); 
	}
	cout << tesouro.size();
}

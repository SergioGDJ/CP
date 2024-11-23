#include<bits/stdc++.h>

using namespace std;

void solve(){
	string pro; cin >> pro;
	string bra; cin >> bra; 
	string aux = bra + bra;
	int counter=0;
       for(int i=0; i<aux.size(); i++){
	       counter = 0;
		   for(int j=0; j<pro.size(); j++){
				if(aux[i+j] == pro[j]) 
					counter++;
		   }
		   if(counter == pro.size()) {
				cout << "S\n";
				return;
		   }
       }

	   for(int i=aux.size()-1; i>=0; i--){
			counter = 0;
			for(int j=0; j<pro.size(); j++){
				if(aux[i-j] == pro[j]) counter++;
			}
			if(counter == pro.size()) {
				cout << "S" << endl;
				return;
			}
	   }

	   cout << "N\n";
	   return;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}

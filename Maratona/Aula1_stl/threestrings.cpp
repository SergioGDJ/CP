#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t; 
	while(t--){
		string a; cin >> a;
		string b; cin >> b; 
		string c; cin >> c; 
		int count = 0;
		for(int i=0; i<a.size(); i++){
			if(a[i] == b[i] && b[i] == c[i]) 
				count++;
			else if(a[i] != b[i] && (c[i] == a[i] || c[i] == b[i]))
				count++;
		}
		if(count == a.size()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

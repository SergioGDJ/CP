#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int,int>> bota(61, {0,0});
	int n; cin >> n; 
	
	//E D;: 
	while(n--){
		int tam; cin >> tam; 
		char pe; cin >> pe;
		if(pe == 'E') bota[tam].first++;
		
		else bota[tam].second++;
	}
	int pares = 0;
	for(int i=30; i<61; i++){
		pares = pares + min(bota[i].first, bota[i].second);
	}
	cout << pares;
}

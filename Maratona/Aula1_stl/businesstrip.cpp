#include<bits/stdc++.h>
using namespace std;

void solve(int k){

	vector<int> months;
	for(int i=0; i<12; i++){
		int val; cin >> val; 
		months.push_back(val); 
	}
	sort(months.begin(), months.begin()+12);
	int sum=0;
	int count=0;
	for(int i=11; i>=0; i--){
		if(sum < k) sum += months[i];
		count++;
	}
	if(sum > k) cout << count; 
	else cout << -1;
}

int main(){
	int k; cin >> k;
	solve(k);
}

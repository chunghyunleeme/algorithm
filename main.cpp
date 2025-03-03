#include <bits/stdc++.h>
using namespace std;
int n, k;
long long ret;
int main(){
	cin >> n >> k;
	vector<pair<int, int>> v(n);
	vector<int> vv(k);
	for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
	for(int j = 0; j < k; j++) cin >> vv[j];

	sort(v.begin(), v.end());
	sort(vv.begin(), vv.end());
	priority_queue<int> pq;

	int j = 0;
	for(int i = 0; i < k; i++){
		while(j < n && v[j].first <= vv[i]) pq.push(v[j++].second);
		if(pq.size()){
			ret += pq.top(); pq.pop();
		}
	}
	cout << ret;
	return 0;
}
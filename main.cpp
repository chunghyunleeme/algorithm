#include <bits/stdc++.h> 
using namespace std; 
int n, a, b, ret; 
vector<pair<int, int>> v;
priority_queue<int, vector<int>, greater<int>> pq; 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> a >> b; 
		v.push_back({a, b}); 
	}
	sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        ret += v[i].second;
        pq.push(v[i].second);
        if(v[i].first < pq.size()){
            ret -= pq.top();
            pq.pop();
        }
    }
    cout << ret;
    return 0;
}

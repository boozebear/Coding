// date: June 19, 2024
// cf-handle: boozebear
// problem: 1966A - Card Exchange

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> c(n);
    vector<int> count(101, 0);

    for(int i=0; i < n; i++){
        cin >> c[i];
        count[c[i]]++;
    }

    int flag = 0;

    for(int i = 1; i <= 100; i++){
        if(count[i] >= k)flag = 1;
    }

    int ans = flag == 1 ? k-1 : n;

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
//date: August 11, 2024
//cf-handle : boozebear
//problem: 1979A - Guess the Maximum

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> comp(n-1, 0);
    for(int i = 0; i < n; i++)cin >> a[i];

    for(int i = 0; i < n-1; i++){
        comp[i] = max(a[i], a[i+1]);
    }
    
    int ans = *min_element(comp.begin(), comp.end()) - 1;
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
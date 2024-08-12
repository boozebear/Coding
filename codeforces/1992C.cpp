//date: August 9, 2024
//cf-handle : boozebear
//problem: 1992C- Gorilla and Permutation

#include<iostream>
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    for(int i = n; i > m; i--) cout << i << " ";
    for(int i = 1; i <= m; i++) cout << i << " ";
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
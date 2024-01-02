//date: January 3, 2024
//cf-handle : boozebear
//problem: 1905A - Constructive Problems

#include<iostream>
using namespace std;

void solve(){
    int m, n;
    cin >> m >> n;

    cout << max(m,n) << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
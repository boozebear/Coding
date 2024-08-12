//date: July 9, 2024
//cf-handle : boozebear
//problem: 1989A - Catch the Coin

#include<iostream>
using namespace std;

void solve(){
    int x, y;
    cin >> x >> y;

    if(y < -1) cout << "NO";
    else cout << "YES";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
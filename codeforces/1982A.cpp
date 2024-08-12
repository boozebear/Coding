//date: June 29, 2024
//cf-handle : boozebear
//problem: 1982A - Soccer

#include<iostream>
using namespace std;

void solve(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if((x1 < y1 && x2 > y2) || (y1 < x1 && y2 > x2)) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
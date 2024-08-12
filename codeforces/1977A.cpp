//date: August 11, 2024
//cf-handle : boozebear
//problem: 1977A - Little Nikita

#include<iostream>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    if(n < m)cout << "NO";
    else{
        if(n%2 == m%2)cout << "YES";
        else cout << "NO";
    }
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
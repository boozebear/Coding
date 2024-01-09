//date: Jan 9, 2024
//cf-handle : boozebear
//problem: 1919B - Plus-Minus Split

#include<iostream>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;

    int ans;
    int p = 0, m = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='+')p++;
        else m++;
    }

    ans = abs(p-m);
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
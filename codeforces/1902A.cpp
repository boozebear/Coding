//date: January 4, 2023
//cf-handle : boozebear
//problem: 1902A : Binary Imbalance

#include<iostream>
using namespace std;

void solve(){
    int n;
    string s;

    cin >> n >> s;

    int ans = 0;
    for(int i = 0; i < n; i++)if(s[i] == '0'){ans = 1;break;}

    if(ans == 1)cout << "YES";
    else cout << "NO";

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
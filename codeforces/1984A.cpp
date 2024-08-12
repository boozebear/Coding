// date: June 19, 2024
// cf-handle: b0ozebear
// Problem: 1984A - Strange Splitting

#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    string ans = "";

    for(int i = 0; i < n; i++)cin >> a[i];

    if(a[0] == a[n-1])cout << "NO";
    else{
        if(a[1] == a[n-1])
            ans = string(n-1, 'R') + "B";
        else
            ans = "R" + string(n-1, 'B');
        
        cout << "YES" << endl << ans;
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;
    cin >> t;

    while(t--)solve();

    return 0;
}

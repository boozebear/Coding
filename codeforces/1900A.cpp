//date: January 3, 2024
//cf-handle : boozebear
//problem: 1900A - Cover in Water

#include<iostream>
using namespace std;

void solve(){
    int n;
    string s;

    cin >> n >> s;

    int ct = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '.')ct++;
        else{
            if(ct<=2)ans+=ct;
            else{
                 ans = 2;
                 break;
            }
            ct = 0;
        }
    }

    if(s[n-1]=='.'){
        if(ct<=2)ans+=ct;
        else ans=2;
    }

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
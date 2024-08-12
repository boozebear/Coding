//date: August 11, 2024
//cf-handle : boozebear
//problem: 1978A - Alice and Books

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n, 0);

    for(int i = 0; i < n; i++)cin >> a[i];

    int m = *max_element(a.begin(), a.end()), ct = 0;
    long ans = 0;

    if(m == a[n-1]){
        sort(a.begin(), a.end());
        ans = m + a[n-2];
    }else{
        ans = m + a[n-1];
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
//date: December 30, 2023
//cf-handle : boozebear
//problem: 1917A - Least Product

#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n, ct, k;
    cin >> n;

    vector<int> a(n, 0);

    for(int i=0; i<n; i++)cin >> a[i];

    ct = 0;
    for(int i=0; i<n; i++){
        if(a[i] < 0)ct++;
        if(a[i] == 0){ct=-1;break;}
    }
    if(ct == -1 || ct%2 != 0)k = 0;
    else if(ct == 0 || ct%2 == 0)k = 1;

    cout << k << endl;
    
    if(ct == 0 || ct%2 == 0)cout << "1 0"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
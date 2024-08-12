//date: August 8, 2024
//cf-handle : boozebear
//problem: 1995A - Diagonals

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    if(k == 0) cout << "0" << endl;
    else{
        int ans = 0, i = n, c = 1;

        while(k > 0){
            k = k-i;
            if(i == n || c == 2){
                i--;
                c=1;
            }else{
                c++;
            }
            ans++;
        }
        cout << ans << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
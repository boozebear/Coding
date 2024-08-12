//date: August 11, 2024
//cf-handle : boozebear
//problem: 1976A - Verify Password

#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string pass;
    cin >> pass;

    int flag = 1;
    for(int i = 0; i < n-1; i++){
        char c1 = pass[i], c2 = pass[i+1];
        if(isalpha(c1) && isdigit(c2) || c1 > c2){
            flag = 0;
            break;
        }
    }

    cout << (flag == 1? "YES":"NO") << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
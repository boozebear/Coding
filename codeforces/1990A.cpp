//date: August 10, 2024
//cf-handle : boozebear
//problem: 1990A - Submission Bait

#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> freq(n+1, 0);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }

    int flag = 0;
    for(int i = n; i > 0; i--){
        if(freq[i]%2 != 0){
            flag = 1;
            break;
        }
    }

    cout << (flag == 1? "Yes":"No") << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
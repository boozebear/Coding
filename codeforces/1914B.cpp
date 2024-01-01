//date: January 1, 2024
//cf-handle: boozebear
//problem: 1914B - Preparing for the Contest
#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> order(n,0);
    for(int i = 0; i < k; i++)order[i] = i+1;
    for(int i = 0; i < n-k; i++)order[i+k] = n-i;

    for(int i = 0; i < n; i++)cout << order[i] << " ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
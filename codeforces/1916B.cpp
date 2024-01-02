//date: January 2. 2024
//cf-handle: boozebear
//program: 1916B - Two Divisors

#include<iostream>
using namespace std;

int hcf(int m, int n){
    return m%n==0?n:hcf(n, m%n);
}

void solve(){
    int a, b;
    unsigned long long x;

    cin >> a >> b;

    x = b%a==0?a*(b/a)*(b/a):a*(b/hcf(b,a)); 

    cout << x << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
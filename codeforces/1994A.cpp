//date: August 9, 2024
//cf-handle : boozebear
//problem: 1994A - Diverse Game

#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int m, n;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m,0));
    vector<int> b(n*m, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    if(m == 1 && n == 1)cout << -1;
    else{
        int k = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i==0 && j==0)continue;
                else b[k++] = a[i][j];
            }
        }

        b[k] = a[0][0];

        for(int i = 0; i < n*m; i++){
            if(i!= 0 && i%m == 0){
                cout << endl;
            }
            cout << b[i] << " ";
        }
    }

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
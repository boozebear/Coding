//date: July 9, 2024
//cf-handle : boozebear
//problem: 1985D - Manhattan Circle

#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<char>>grid(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < m; j++){
            cin >> grid[i][j];
        }
    }

    int max_c1 = 0, max_c2 = 0, x, y, c1, c2;

    for(int i = 0; i < n; i++){
        c1 = 0;
        for(int j = 0 ; j < m; j++){
            if(grid[i][j] == '#') c1++;
        }
        if(max_c1 < c1){
            x = i+1;
            max_c1 = c1;
        }
    }

    for(int i = 0; i < m; i++){
        c2 = 0;
        for(int j = 0 ; j < n; j++){
            if(grid[j][i] == '#') c2++;
        }
        if(max_c2 < c2){
            y = i+1;
            max_c2 = c2;
        }
    }

    cout << x << " " << y << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
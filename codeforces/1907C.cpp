//date: Jan 9, 2024
//cf-handle : boozebear
//problem: 1907C - Removal of Unattractive Pairs

#include<iostream>
#include<string>
#include<iterator>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;

    int c1 = 0, c2 = 1;

    while(c2 < s.length()){
        if(s[c1] == s[c2]){
            int ct = 0;
            while(c2 < s.length() && s[c1] == s[c2]){ct++;c2++;}

            if(c2 == s.length())break;

            cout << s << " ";

            if(c1==0)
                s = s.substr(0, c2-1)+s.substr(c2+1,s.length()-c2);
            else
                s = s.substr(0, c1-1)+s.substr(c1+1,c2-c1-2)+s.substr(c2+1,s.length()-c2);

            c1 = 0;
            c2 = 1;
        }
        c1++; c2++;
    }

    cout << s << " " << s.length() << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)solve();

    return 0;
}
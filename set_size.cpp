/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 18 / 2025
   Time  : 00:31
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << 'YES\n'
#define Yes cout << 'Yes\n'
#define NO cout << 'NO\n'
#define No cout << 'No\n'
#define ld long double
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // code here 
    set<int>s;
    s.insert(1);
    s.insert(-2);
    s.insert(-1);
    s.insert(1);
    cout<<s.size ()<<nl;
    for (auto &x:s)
    {
        cout<<x<<" ";
    }
    cout<<nl;
}

int main() {
    //fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
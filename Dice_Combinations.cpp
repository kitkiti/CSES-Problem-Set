//
// Created by ADRITA on 06-Jun-24.
//


#include  <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;
# define ll long long
const int nmax = 1e6+10;
const int MOD = 1e9+7;
ll memo[nmax];

ll dp(int x) {
    if (x == 0) return 1;
    if (memo[x] != 0) return memo[x];
    for (int i = 1; i <= 6; i++) {
        if (x-i >= 0){
            memo[x] += dp(x-i);
            memo[x] %= MOD;
        }
    }
    return memo[x];
}

void kitkiti(ll tc) {
    memset(memo, 0, sizeof(memo));
    int n;
    cin >> n;
    cout << dp(n) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1, i = 1;
    while (i <= T) {
        kitkiti(i++);
    }
    return 0;
}
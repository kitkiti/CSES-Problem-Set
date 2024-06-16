//
// Created by ADRITA on 06-Jun-24.
//


#include  <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;
# define ll long long
const int nmax = 1e6+10;
ll memo[nmax];

ll dp(int x){
    if (x == 0) return 0;
    if (x/10 == 0) return 1;
    if (memo[x] != -1) return memo[x];
    int n = x;
    int mx = 0;
    while (n > 0){
        mx = max(mx, n%10);
        n /= 10;
    }
    memo[x] = 1 + dp(x-mx);
    return memo[x];
}

void kitkiti(ll tc) {
    memset(memo, -1, sizeof(memo));
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
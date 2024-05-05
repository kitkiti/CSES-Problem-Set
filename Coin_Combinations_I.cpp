#include "bits/stdc++.h"
using namespace std;
const int nmax = 1e6+10;
const int MOD = 1e9 + 7;
typedef long long int ll;


vector<int> value;
ll memo[nmax];
int coins, target;

ll dp(int x){
    if (x == 0) return 1;

    if (memo[x] != -1) return memo[x];

    ll ret = 0;
    for (int c : value) {
        ret += (x-c < 0) ? 0 : dp(x-c);
        ret %= MOD;
        if (ret < 0) ret += MOD;
    }


    memo[x] = ret;

    return ret;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(memo, -1, sizeof (memo));

    cin >> coins >> target;
    for (int i=0; i<coins; i++){
        int c;
        cin >> c;
        value.push_back(c);
    }

    ll ans = dp(target);
    cout << ans << endl;

}
#include "bits/stdc++.h"
using namespace std;
const int nmax = 1e6+10;

vector<int> value;
int memo[nmax];
int coins, target;

int dp(int x){
    if (x == 0) return 0;

    if (memo[x] != -1) return memo[x];

    int ret = 1e9;
    for (int c : value) ret = (x-c < 0) ? ret : min(ret, dp(x-c));

    ret += 1;
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
//    for (int i = 0; i <= 11; i++) cout << "target " << i << " needs " << dp(i) << " coins" << endl;
    int ans = dp(target);
    ans = (ans >= 1e9) ? -1 : ans;
    cout << ans << endl;

}
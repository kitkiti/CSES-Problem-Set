//
// Created by ADRITA on 19-May-24.
//


#include  <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;
# define ll long long


void kitkiti(ll tc) {
    int n;
    cin >> n;
    vector<int> p;
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        p.push_back(c);
    }
    sort(p.begin(), p.end());
    ll median = p[(n-1)/2];
    ll cost = 0;
    for (int i = 0; i < n; i++) cost += abs(p[i]-median);
    cout << cost;

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
#include "bits/stdc++.h"
using namespace std;

const int nmax = 1e3+10;

char grid[nmax][nmax];
bool visited[nmax][nmax];
int neighbours[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

void dfs(int x, int y){ // each node is identified by (x, y) co-ordinates
    visited[x][y] = true;

    for (auto [i, j] : neighbours) {
        bool okay = x+i > 0 && x+i <= n && y+j > 0 && y+j <= m;
        if (!visited[x+i][y+j] && grid[x+i][y+j] != '#' && okay)
            dfs(x+i, y+j);
    }

}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++)
        cin >> grid[i][j];

///printing the grid
//    for (int i = 1; i <= n; i++)
//    {for (int j = 1; j <= m; j++) cout << grid[i][j] << " ";
//        cout << endl;
//    }


    int ans = 0;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++)  {
        if (!visited[i][j] && grid[i][j] != '#'){
            dfs(i, j);
            ans++;
        }
    }
    cout  << ans << endl;
}

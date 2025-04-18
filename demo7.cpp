#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int MAX = 1001;
const int dx[4] = {0, 0, -1, 1}; 
const int dy[4] = {-1, 1, 0, 0};
const char dir[4] = {'L', 'R', 'U', 'D'};

int n, m;
vector<string> grid;
int monster_dist[MAX][MAX], player_dist[MAX][MAX], parent[MAX][MAX];

void bfs_monsters(queue<pair<int, int>>& q) {
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] != '#' && monster_dist[nx][ny] == -1) {
                monster_dist[nx][ny] = monster_dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

bool bfs_escape(int start_x, int start_y, string &path) {
    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    player_dist[start_x][start_y] = 0;
    parent[start_x][start_y] = -1;
    
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        
        if (x == 0 || y == 0 || x == n - 1 || y == m - 1) {
            // Escape found, reconstruct path
            while (parent[x][y] != -1) {
                int d = parent[x][y];
                path += dir[d];
                x -= dx[d];
                y -= dy[d];
            }
            reverse(path.begin(), path.end());
            return true;
        }
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] != '#' && player_dist[nx][ny] == -1) {
                if (monster_dist[nx][ny] == -1 || player_dist[x][y] + 1 < monster_dist[nx][ny]) {
                    player_dist[nx][ny] = player_dist[x][y] + 1;
                    parent[nx][ny] = i;
                    q.push({nx, ny});
                }
            }
        }
    }
    return false;
}

int main() {
    fast_io;
    cin >> n >> m;
    grid.resize(n);
    
    queue<pair<int, int>> monster_queue;
    int start_x, start_y;
    
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            monster_dist[i][j] = -1;
            player_dist[i][j] = -1;
            if (grid[i][j] == 'M') {
                monster_queue.push({i, j});
                monster_dist[i][j] = 0;
            } else if (grid[i][j] == 'A') {
                start_x = i, start_y = j;
            }
        }
    }
    
    bfs_monsters(monster_queue);
    
    string path;
    if (bfs_escape(start_x, start_y, path)) {
        cout << "YES\n" << path.size() << "\n" << path << "\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}


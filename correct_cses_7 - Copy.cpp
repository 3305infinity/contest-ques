#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int MAX = 1001;
const int dx[4] = {0, 0, -1, 1}; 
const int dy[4] = {-1, 1, 0, 0};
const char dir[4] = {'L', 'R', 'U', 'D'};

int n, m;
vector<string> grid;
int monster_dist[MAX][MAX], player_dist[MAX][MAX];
pair<int, int> parent[MAX][MAX];

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

bool bfs_escape(int start_x, int start_y, pair<int, int>& exit_pos) {
    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    player_dist[start_x][start_y] = 0;
    parent[start_x][start_y] = {-1, -1};
    
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        
        if (x == 0 || y == 0 || x == n - 1 || y == m - 1) {
            exit_pos = {x, y};
            return true;
        }
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] != '#' && player_dist[nx][ny] == -1) {
                if (monster_dist[nx][ny] == -1 || player_dist[x][y] + 1 < monster_dist[nx][ny]) {
                    player_dist[nx][ny] = player_dist[x][y] + 1;
                    parent[nx][ny] = {x, y};
                    q.push({nx, ny});
                }
            }
        }
    }
    return false;
}

void reconstruct_path(pair<int, int> start, pair<int, int> exit_pos) {
    string path;
    pair<int, int> curr = exit_pos;
    while (curr != start) {
        pair<int, int> prev = parent[curr.first][curr.second];
        for (int i = 0; i < 4; i++) {
            if (prev.first + dx[i] == curr.first && prev.second + dy[i] == curr.second) {
                path += dir[i];
                break;
            }
        }
        curr = prev;
    }
    reverse(path.begin(), path.end());
    cout << "YES\n" << path.size() << "\n" << path << "\n";
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
            parent[i][j] = {-1, -1};
            if (grid[i][j] == 'M') {
                monster_queue.push({i, j});
                monster_dist[i][j] = 0;
            } else if (grid[i][j] == 'A') {
                start_x = i, start_y = j;
            }
        }
    }
    
    bfs_monsters(monster_queue);
    
    pair<int, int> exit_pos;
    if (bfs_escape(start_x, start_y, exit_pos)) {
        reconstruct_path({start_x, start_y}, exit_pos);
    } else {
        cout << "NO\n";
    }
    
    return 0;
}


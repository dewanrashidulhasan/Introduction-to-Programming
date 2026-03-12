#include <bits/stdc++.h>
using namespace std;
char grid[35][35];
bool visited_array[35][35];
int level[35][35];
vector<pair<int, int>> round_move;
int n;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
        return false;
    else
        return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited_array[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> parent_node = q.front();
        q.pop();
        int parent_node_i = parent_node.first;
        int parent_node_j = parent_node.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = parent_node_i + round_move[i].first;
            int cj = parent_node_j + round_move[i].second;
            if (valid(ci, cj) && !visited_array[ci][cj] && grid[ci][cj] != 'T')
            {
                q.push({ci, cj});
                visited_array[ci][cj] = true;
                level[ci][cj] = level[parent_node_i][parent_node_j] + 1;
            }
        }
    }
}
int main()
{
    round_move.push_back({-1, 0});
    round_move.push_back({1, 0});
    round_move.push_back({0, -1});
    round_move.push_back({0, 1});
    int si, sj, di, dj;
    while (cin >> n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                if (grid[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
            }
        }

        memset(visited_array, false, sizeof(visited_array));
        memset(level, -1, sizeof(level));
        bfs(si, sj);
        cout << level[di][dj] << endl;
    }
    return 0;
}
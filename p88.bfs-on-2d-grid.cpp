#include<bits/stdc++.h>
using namespace std;
int n,m;
char grid[105][105];
bool vis[105][105];
vector<pair<int,int>> mov = {{-1,0},{0,1},{1,0},{0,-1}};
int level[105][105];


bool valid(int i, int j)
{
    if(i >=n || i<0 || j<0 || j>=m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;


        cout << par_i << " " << par_j << endl;
        for(int i=0;i<4; i++)
        {
            int ci = par_i + mov[i].first;
            int cj = par_j + mov[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> grid[i][j];
        
    int si , sj, di, dj;
    cin >> si >> sj >> di >> dj;

    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));

    bfs(si,sj);
    level[di][dj] != -1 ? cout << "\n\n" << level[di][dj] : cout << "\n\n" << "Not Possible";
    return 0;
}
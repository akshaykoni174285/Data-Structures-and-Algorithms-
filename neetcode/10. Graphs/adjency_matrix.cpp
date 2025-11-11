#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;


void bfs(int node,vector<vector<int>> &adjMatrix){
    int n = adjMatrix.size();
    vector<bool> visited(n,false);
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<" ";

        for(int v=0;v<n;v++){
            if(adjMatrix[u][v] == 1 && !visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }

}

void dfs(int node, vector<vector<int>> &adjMatrix){
    int n = adjMatrix.size();
    vector<bool> visited(n,false);
    stack<int> s;
    s.push(node);
    visited[node] = true;

    while(!s.empty()){
        int u = s.top();
        s.pop();
        cout<<u<<" ";

        for(int v=0;v<n;v++){
            if(adjMatrix[u][v] == 1 && !visited[v]){
                visited[v] = true;
                s.push(v);
            }
        }
    }
}

void dfs_rec(int node, vector<bool> &visited, vector<vector<int>> &adjMatrix){
    visited[node] = true;
    cout<<node<<" ";

    int n = adjMatrix.size();
    for(int v=0;v<n;v++){
        if(adjMatrix[node][v] == 1 && !visited[v]){
            dfs_rec(v,visited,adjMatrix);
        }
    }
}

int main(int argc, char const *argv[])
{
    int n = 4;
    // created a 4x4 matrix initialized to 0
    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));
    adjMatrix[0][1] = 1;
    adjMatrix[1][0] = 1;
    adjMatrix[0][2] = 1;
    adjMatrix[2][0] = 1;
    adjMatrix[2][3] = 1;
    adjMatrix[3][2] = 1;
    // bfs(0,adjMatrix);
    vector<bool> visited = vector<bool>(n,false);
    dfs_rec(0, visited, adjMatrix);

    return 0;
}

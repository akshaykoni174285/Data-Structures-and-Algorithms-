#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

void Printgraph(vector<int> adj[], int V){
    for (size_t i = 0; i < V; i++)
    {   cout<<i<<"->";
        for(int j: adj[i]){
            cout << j<<" ";
        }
        cout << endl;
        
    }
    
}


void dfs(int node,vector<bool> &visited,vector<int> adj[]){
    visited[node] = true;
    cout<<node<<" ";
    for(int i: adj[node]){
        if(!visited[i]){
            dfs(i, visited, adj);
        }
    }
}


void bfs(int node,vector<bool> &visited,vector<int> adj[]){
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        cout<<front<<" ";
        for(int i:adj[front]){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);  
            }
        }
    }

}
int main(int argc, char const *argv[])
{
    // int V = 4;
    // vector<int> adj[V];
    // adj[0].push_back(1);
    // adj[1].push_back(0);

    // adj[0].push_back(2);
    // adj[2].push_back(0);

    // adj[2].push_back(3);
    // adj[3].push_back(2);

    // Printgraph(adj, V);

    vector<int> adj[5];
    adj[0] = {1, 2};
    adj[1] = {3};
    adj[2] = {4};
    adj[3] = {};
    adj[4] = {};
    vector<bool> visited(5, false);

    dfs(0,visited,adj);
    // bfs(0, visited, adj);

    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // TODO: Implement logic
        unordered_set<int> visited;
        unordered_set<int> path;
        unordered_map<int,vector<int>> adj;

        for(auto& preq: prerequisites){
            int course = preq[0];
            int precourse = preq[1];
            adj[course].push_back(precourse);

        }

        for(int counter = 0;counter < numCourses;counter++){
            if(visited.find(counter) == visited.end()){
                if(!dfs(0,adj,visited,path)){
                    return false;
                }
            }
        }
        return true;

        // return false; // placeholder
    }

private:
    bool dfs(int course, unordered_map<int, vector<int>>& adj,unordered_set<int>& visited, unordered_set<int>& path) {
            if(path.find(course)!= path.end()){
                return false;
            }
            if(visited.find(course)!=visited.find(course)){
                return true;
            }

            path.insert(course);
            for(auto& neigh:adj[course]){
                if(!dfs(neigh,adj,visited,path));
            }
            visited.insert(course);
            path.erase(course);
            adj[course].clear();
            

        // TODO: Implement DFS logic
        return true; // placeholder
    }
};

int main() {
    Solution sol;

    // Example input
    int numCourses = 4;
    vector<vector<int>> prerequisites = {{1, 0}, {2, 1}, {3, 2}};

    bool result = sol.canFinish(numCourses, prerequisites);

    cout << (result ? "Can finish all courses" : "Cannot finish all courses") << endl;

    return 0;
}

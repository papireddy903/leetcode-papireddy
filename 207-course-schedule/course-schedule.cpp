class Solution {
public:
    unordered_map<int, vector<int>> graph;
    vector<bool> visited, recursionStack;

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        for (auto prerequisite : prerequisites)
            graph[prerequisite[1]].push_back(prerequisite[0]);
        visited = vector<bool>(numCourses);
        recursionStack = vector<bool>(numCourses);

        for (int i = 0; i < numCourses; i++)
            if (!visited[i] && isCyclic(i))
                return false;

        return true;
    }

    bool isCyclic(int course) {
        visited[course] = true;
        recursionStack[course] = true;

        for (auto neighbor : graph[course]) {
            if ((!visited[neighbor] && isCyclic(neighbor)) || recursionStack[neighbor])
                return true;
        }

        recursionStack[course] = false;
        return false;
    }
};

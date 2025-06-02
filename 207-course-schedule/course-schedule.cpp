class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>grid(numCourses);
        vector<int> degree(numCourses, 0);


        for(auto& pre : prerequisites){
            int u = pre[0];
            int v = pre[1];
            grid[v].push_back(u);
            degree[u]++;

        }

        queue<int> q;
        for(int i = 0 ; i <numCourses ; i++ ){
            if(degree[i] == 0){
                q.push(i);
            }
        }
        int count = 0 ;
        while(!q.empty()){
            int current = q.front();
            q.pop();
            count++;
        

        for(int neighbout : grid[current]){
            degree[neighbout]--; 
            if(degree[neighbout] == 0){
                q.push(neighbout);
            }
        }
    }
    return count == numCourses ;
    }
};
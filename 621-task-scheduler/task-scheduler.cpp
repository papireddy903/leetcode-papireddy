class Solution {
public:
    int leastInterval(vector<char>& tasks, int cooldown) {
        priority_queue<int> taskFrequency;
        vector<int> taskCount(26, 0);

        for (char task : tasks) {
            taskCount[task - 'A']++;
        }   

        for (int i = 0; i < 26; ++i) {
            if (taskCount[i]) 
                taskFrequency.push(taskCount[i]);
        }

        int totalTime = 0;
        while (!taskFrequency.empty()) {
            vector<int> remainingTasks;
            int cycle = cooldown + 1;

            while (cycle and !taskFrequency.empty()) {
                int maxFrequency = taskFrequency.top();
                taskFrequency.pop();
                if (maxFrequency > 1) {
                    remainingTasks.push_back(maxFrequency - 1);
                }
                ++totalTime;
                --cycle;
            }

            for (int count : remainingTasks) {
                taskFrequency.push(count);
            }
            
            if (taskFrequency.empty()) break;
            totalTime += cycle;
        }
        return totalTime;
    }
};

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0;
        int start = 0;
        for (int i = 0;i<gas.size();i++){
            total_gas += gas[i];
            total_cost += cost[i];
        }
        
        if (total_gas < total_cost) return -1;

        int running_gas_var = 0;
        for (int i = 0;i<gas.size();i++){
            running_gas_var += gas[i] - cost[i];
           
            if (running_gas_var < 0){
                running_gas_var = 0;
                start = i+1;
            }

        }
        return start;
        
    }
};
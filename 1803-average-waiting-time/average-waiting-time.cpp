class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double cur_wait = customers[0][1];
        double prev_finish_time = customers[0][0]+ customers[0][1];
        for (int i = 1;i<n;i++){
            if (prev_finish_time < customers[i][0]){
                cur_wait +=customers[i][1];
                prev_finish_time = customers[i][0] +customers[i][1];
            }
            else{
            cur_wait += (customers[i][1] + prev_finish_time - customers[i][0]);
            prev_finish_time += customers[i][1];
            }
            
            // cout << "Process " << i << " ending time : " << prev_finish_time << endl;
            // cout << "total wait time: "<< cur_wait<<endl;
        }
        return (double)cur_wait/n;
        
    }
};
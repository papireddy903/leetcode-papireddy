class Solution {
    private:
    int helper(int killer, int k, vector<int> &friends){
        if (friends.size()==1){
            return friends[0];
        }

        killer = (killer + k) % friends.size();
        friends.erase(friends.begin()+killer);
        return helper(killer, k, friends);


    }
public:
    int findTheWinner(int n, int k) {
        vector<int> friends;
        for (int i = 1;i<=n;i++){
            friends.push_back(i);
        }

        return helper(0,k-1,friends);
        
    }
};
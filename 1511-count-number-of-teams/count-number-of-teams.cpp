class Solution {
public:
    int numTeams(vector<int>& ratings) {
        int size = ratings.size();
        int count = 0;

        for (int i = 0; i < size; i++) {
            int leftSmaller = 0, leftGreater = 0, rightSmaller = 0, rightGreater = 0;

            for (int j = i - 1; j >= 0; j--) {
                if (ratings[j] < ratings[i]) 
                    leftSmaller++;
                else 
                    leftGreater++;
            }

            for (int j = i + 1; j < size; j++) {
                if (ratings[j] < ratings[i]) 
                    rightSmaller++;
                else 
                    rightGreater++;
            }

            count += (leftSmaller * rightGreater + leftGreater * rightSmaller);
        }

        return count;
    }
};
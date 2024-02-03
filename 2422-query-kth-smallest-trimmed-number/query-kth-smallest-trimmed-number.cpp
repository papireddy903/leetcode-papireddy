class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& numbers, vector<vector<int>>& queries) {
        vector<int> result;
        int numCount = numbers.size();

        for (auto &query : queries) {
            vector<pair<string, int>> sortedNumbers;

            for (int i = 0; i < numCount; i++) {
                sortedNumbers.push_back({numbers[i].substr(numbers[i].size() - query[1]), i});
            }

            sort(sortedNumbers.begin(), sortedNumbers.end());
            result.push_back(sortedNumbers[query[0] - 1].second);
        }

        return result;
    }
};

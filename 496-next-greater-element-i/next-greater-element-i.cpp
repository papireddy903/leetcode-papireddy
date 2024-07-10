class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        unordered_map<int,int> mp;
        stack<int> st;
        for (int i = 0;i<m;i++){
            while(!st.empty() and st.top()<nums2[i]){
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        // for (auto it : mp){
        //     cout << it.first << " : " << it.second << endl;
        // }
        vector<int> res;

        for (auto it : nums1){
            if (mp.find(it)!=mp.end()){
                res.push_back(mp[it]);
            }
            else{
                res.push_back(-1);
            }
        }
        return res;
        
    }
};
class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int> ds;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            ds[nums[i]]++;
            if(ds[nums[i]] <= k){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
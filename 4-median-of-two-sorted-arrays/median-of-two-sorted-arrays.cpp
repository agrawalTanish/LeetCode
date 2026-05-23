class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;

        for(int i = 0;i<n;i++){
            ans.push_back(nums1[i]);
        }
        for(int j = 0;j<m;j++){
            ans.push_back(nums2[j]);
        }
        sort(ans.begin(),ans.end());
        int s = ans.size();
        int mi = s/2;
            if(s%2 == 0){
                float mid = (ans[mi-1] + ans[mi]) / 2.0;
                return mid;
            }
        return ans[mi];
    }
};
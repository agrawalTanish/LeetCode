class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n);
        vector<int> cnt(n+1,0);
        int count = 0;

        for (int i=0;i<n;i++){
            cnt[A[i]]++;

            if(cnt[A[i]] == 2){
                count++;
            }

            cnt[B[i]]++;
            if(cnt[B[i]] == 2){
                count++;
            }
            ans[i] = count;
        }
    
        return ans;
    }
};
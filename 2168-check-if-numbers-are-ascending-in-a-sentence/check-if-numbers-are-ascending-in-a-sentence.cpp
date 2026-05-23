class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> ans;
        int n = s.length();

        for(int i = 0;i<n;i++){
            if(isdigit(s[i])){
                int num = 0;
                while(i<n && isdigit(s[i])){
                    num = num*10 + (s[i] - '0'); 
                    i++;
                }
                ans.push_back(num);
            }
        }
        for(int j=1;j<ans.size();j++){
            if(ans[j-1] >= ans[j]){
                return false;
            }
        }
        return true;
    }
};
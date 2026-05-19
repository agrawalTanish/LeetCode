class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxarea = 0;

        while(left<right){
            int width = right - left;
            int curheight = min(height[left],height[right]);
            maxarea = max(maxarea,width*curheight);

            if (height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxarea;
    }
};
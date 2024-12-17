class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int temp=0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            // maxArea = max(maxArea, (right - left) * min(height[left], height[right]));

            if (height[left] < height[right]) {
                temp=height[left]*(right-left);//r-l is the distance and multilpled with current height
                left++;
            } else {
                temp = height[right]*(right-left);
                right--;
            }
            if(temp>maxArea)
            {
                maxArea=temp;
            }
        }

        return maxArea;        
    }
};
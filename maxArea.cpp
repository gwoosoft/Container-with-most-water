class Solution {
public:
    int maxArea(vector<int>& height) {   
        int left=0;
        int right=height.size()-1;
        int sz=height.size();
        int mx=0;
        
        while(left<sz&&right>0){
            mx=max(mx,(right-left)*min(height[left],height[right]));
            if(height[left]<height[right]) {left++;}
            else {right--;}
        }

        return mx;
    }
};

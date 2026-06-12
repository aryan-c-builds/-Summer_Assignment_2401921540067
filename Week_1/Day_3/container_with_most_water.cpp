class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxwater=0;
       for(int l=0,r=height.size()-1;l<r;){
        int h=min(height[l],height[r]);
        int w=r-l;
        maxwater=max(maxwater,h*w);
        if(height[l]<height[r]) l++;
        else r--;
       }
       return maxwater;
    }
};
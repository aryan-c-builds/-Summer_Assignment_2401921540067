class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int s=0;
        int e=0;
        int currsum=0;
        while(e<nums.size()){
            currsum+=nums[e];
            if(currsum>maxsum){
                maxsum=currsum;
            }
            if(currsum<0){
                e++;
                s=e;
                currsum=0;
            }
            else{
                e++;
            }
        }
        return maxsum;
    }    
};
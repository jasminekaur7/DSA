class Solution {
public:
int robHelper(vector<int> &nums){
    int n = nums.size();
    if(n ==1) return nums[0];
    vector<int>dp(n);
    dp[0]= nums[0];
    dp[1]= max(nums[0],nums[1]);
    for(int i =2; i<n; i++){
        dp[i]= max(dp[i-2]+nums[i],dp[i-1]);
    }
    return dp[n-1];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return nums[0];
        vector<int> skipLast(n-1);
        vector<int> skipFirst(n-1);
        for(int i =0; i<n-1;i++){
            skipLast[i] = nums[i];
            skipFirst[i] = nums[i+1];
        }
        int skippingLast=robHelper(skipLast);
        int skippingFirst= robHelper(skipFirst);
        return max(skippingLast, skippingFirst);
        
    }
};
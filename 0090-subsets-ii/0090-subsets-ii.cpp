class Solution {
public:
void subset(vector<int> &nums, int index, vector<int>&curr,vector<vector<int>> &ans){
    ans.push_back(curr);
    for(int i =index; i<nums.size(); i++){
        if(i>index && nums[i]==nums[i-1])
        continue;
        curr.push_back(nums[i]);
subset(nums, i+1, curr, ans);
curr.pop_back();
}
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<int> curr;
              vector<vector<int>> ans;
          subset(nums, 0, curr, ans);
return ans;  
    }
};
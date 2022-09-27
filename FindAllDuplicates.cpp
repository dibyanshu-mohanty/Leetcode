class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int last = nums.size();
        vector<int> duplicates;
        for(int i=0; i<last-1;i++){
            if(nums[i]==nums[i+1]){
                duplicates.push_back(nums[i]);
            }
        }
        return duplicates;
    }
};

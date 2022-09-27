class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int l = 0;
        for(int r =1; r < nums.size() ; r++){
            if(nums[l] != nums[r]){ //if we encounter a number different from the last type
                l++; //our record about how many different numbers +1
                nums[l] = nums[r]; //and replace next place with new number
            }
        }
        return l+1;
    }
};
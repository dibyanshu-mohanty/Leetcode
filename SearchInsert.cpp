class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        int l = 0 , r =length-1 , mid;
        if(target>nums[r]){
            return length;
        }
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid] == target) 
                return mid;
            else if (nums[mid] < target) 
                l = mid+1;
            else 
                r = mid-1;
        }
        return l;
    }
};

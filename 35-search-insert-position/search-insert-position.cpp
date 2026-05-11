class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n = nums.size();
       int B = 0;
       int E = n-1;
       while(B <= E){
        int mid = (B + E) /2;
        if(target == nums[mid]){
            return mid;
        }else if(target > nums[mid]){
            B = mid + 1;
        }else{
            E = mid -1;
        }
       } 
       return B;
    }
};
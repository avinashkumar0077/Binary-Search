class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int End = n-1;
        while(start < End){
            int mid = (start + End)/2;
            if(nums[mid] < nums[mid + 1]){
                start = mid + 1;
            }else{
                End = mid;
            }
        }
        return start;
    }
};
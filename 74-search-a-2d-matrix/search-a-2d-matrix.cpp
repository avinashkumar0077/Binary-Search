class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int start = 0;
        int end = rows * cols - 1;

        while(start <= end){

            int mid = (start + end) / 2;

            int row = mid / cols;
            int col = mid % cols;

            int element = matrix[row][col];

            if(element == target){
                return true;
            }
            else if(target > element){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return false;
    }
};
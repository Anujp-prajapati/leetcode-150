class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();

        int begin = 0; // Pointer for the position to write non-zero elements

        // Move non-zero elements to the front
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[begin] = nums[i];
                begin++;
            }
        }

        // Fill the remaining positions with zeros
        for (int i = begin; i < n; i++) {
            nums[i] = 0;
        }
    }
        
    
}
;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        
        while(mid<=high){
            switch(nums[mid]){
                //If element is 0
                case 0:
                    swap(nums[mid++],nums[low++]);
                    break;
                //If element is 1
                case 1:
                    mid++;
                    break;
                //If element is 2
                case 2:
                    swap(nums[mid],nums[high--]);
                    
                    
            }
        }
    }
};
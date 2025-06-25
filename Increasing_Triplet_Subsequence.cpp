class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // Brute force o(n)3
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i]<nums[j] && nums[j] <nums[k]){
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return false;



        // Optimize o(n)

        int frist = INT_MAX;
        int second = INT_MAX;

        for(int num : nums){
            if(num <= frist){
                frist = num;
            }
            else if(num <= second){
                second = num;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
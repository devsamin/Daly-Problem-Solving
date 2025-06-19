class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // brute force o(n2)
        // int n = nums.size();
        // vector<int> ans(n,1);
        // for(int i=0;i<n;i++){
        //     int product = 1;
        //     for(int j=0;j<n;j++){
        //         if(i!=j){
        //             product*=nums[j];
        //         }
        //     }
        //     ans[i] = product;
        // }
        // return ans;

        // Optmal approche o(n)
        int n = nums.size();
        // count prefix
        vector<int> prefix(n);
        prefix[0] = 1;
        for(int i=1;i<n;i++){
            prefix[i] = nums[i - 1] * prefix[i - 1];
        }
        // count suffix
        vector<int > suffix(n);
        suffix[n-1] = 1;
        for(int i = n -2;i>=0;i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        vector<int> ans;
        for(int i = 0;i<n;i++){
            ans.push_back(suffix[i] * prefix[i]);
        }
        return ans;
    }
};
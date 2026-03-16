class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int withoutmissingnumber=n*(n+1)/2;
        int withmissingnumber=0;
        for(int i=0;i<nums.size();i++) withmissingnumber +=nums[i];
        return withoutmissingnumber - withmissingnumber;
    }
};
        
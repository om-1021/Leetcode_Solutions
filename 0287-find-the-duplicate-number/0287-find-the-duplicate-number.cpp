class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans(n+1,0);

        for(int i=0;i<n;i++){
            ans[nums[i]]++;
           }
        for(int i=0;i<ans.size();i++)
        if(ans[i]>1)
        return i;
        
        return 0;
    }
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        
        deque <int> list;
       
        vector<int> ans;
        while(j<nums.size()){
            while(!list.empty() && list.back() < nums[j]){
                list.pop_back();
            }
            list.push_back(nums[j]);
            

            if(j-i+1 < k ) j++;
            else if (j-i+1 == k){
                ans.push_back(list.front());
                if(list.front() == nums[i]){
                    list.pop_front();
                }
                i++; j++;
            }  
        }
        return ans;
        
    }
};
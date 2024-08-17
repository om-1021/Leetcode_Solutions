class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            int curr_max = arr[i+1];
            for(int j=i+2;j<arr.size();j++){                
                curr_max = max(curr_max,arr[j]);
            }
            arr[i]=curr_max;
        }
        arr[arr.size()-1] = -1;
        return arr;
        
    }
};
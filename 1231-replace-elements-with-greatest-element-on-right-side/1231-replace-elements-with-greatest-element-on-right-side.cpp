class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()<=1){
            return {-1};
        }
        int n = arr.size();
        int curr_max = arr[n-1] > arr[n-2] ? arr[n-1] : arr[n-2];
        arr[n-2] = arr[n-1];
        arr[n-1] = -1;
        for( int i= n-3;i>=0;i--){
            if(arr[i] > curr_max){
                int temp = arr[i];
                arr[i] = curr_max;
                curr_max = temp;
            }
            else 
            arr[i] = curr_max;
        }
        return arr;
               
    }
};
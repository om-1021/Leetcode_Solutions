class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {

        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());

        // for (int i = 0; i < n; i++) {
        //     int start = arr[i][0];
        //     int end = arr[i][1];

        //     if (!ans.empty() && end <= ans.back()[1])
        //         continue;

        //     for (int j = i + 1; j < n; j++) {
        //         if (arr[j][0] <= end)
        //             end = max(arr[j][1], end);
        //         else break;
        //     }
        //     ans.push_back({start, end});
        // }
        ans.push_back(arr[0]);
        for(int i =1;i<n;i++){
            if(ans.back()[1] >= arr[i][1])
            continue;
            if(arr[i][0] <= ans.back()[1]){
                ans.back()[1] = max(arr[i][1],ans.back()[1]);
                continue;
            }
            ans.push_back({arr[i][0],arr[i][1]});

        }




        return ans;
    }
};
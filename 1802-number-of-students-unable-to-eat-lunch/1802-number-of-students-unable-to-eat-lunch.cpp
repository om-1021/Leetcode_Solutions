class Solution {
public:
    int countStudents(vector<int>& stud, vector<int>& sand) {

        int countStuds0 = 0;
        int countStuds1 = 0;
        int result = stud.size();
        for (auto x : stud) {
            if (x) {
                countStuds1++;
            } else
                countStuds0++;
        }

    for(auto x : sand){
        if(x == 0){
            if(countStuds0 > 0){
                result--;
                countStuds0--;
            }
            else
            return result;
            
        }else if(x == 1){
            if(countStuds1 > 0){
                result--;
                countStuds1--;
            }
            else
            return result;

        }
    }
    return 0;
     
    }
};
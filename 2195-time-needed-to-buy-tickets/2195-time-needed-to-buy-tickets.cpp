class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;

        for(int i=0;i<tickets.size();i++){
            if(i<=k){
                count+= min(tickets[k],tickets[i]);
            }
            else{
                count+= tickets[i]<tickets[k] ? tickets[i] : tickets[k]-1;
            }
        }
        return count;
       
       
        
    }
};
class Solution {
public:
    int reverse(int x) {
        
       long long int rev=0;
        
        if(x>=2147483647 or x<=-2147483648 )
            return 0;
        
        if(x>0)
        {
            while(x>0)
            {
                rev*=10;
                if(rev>=2147483647 or rev<=-2147483648 )
                 return 0;
                rev+=x%10;
                x/=10;
            }
            
        }
        else
        {
            x*=-1;
            while(x>0)
            {
                rev*=10;
                 if(rev>=2147483647 or rev<=-2147483648 )
                 return 0;
                rev+=x%10;
                x/=10;
            }
            rev*=-1;
        }
        return int(rev);
    }
};
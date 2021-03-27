class Solution {
public:
    long reverse(int x){
        long rev=0;
        while(x!=0)
        {
            int l=(x%10);
            rev=(rev*10)+l;
            x= (x/10);  // x= x/10
        }
        //
        if(rev<=-2147483648 || rev>=2147483647){ 
            return 0;
        }
        else{
        return rev;
        }
    }

};
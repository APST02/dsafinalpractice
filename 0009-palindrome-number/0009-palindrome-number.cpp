class Solution {
    private:
    int reverse(int a){
        int ans=0;
        while(a!=0){
            int digit=a%10;
            if(ans>(INT_MAX/10) || ans<(INT_MIN/10))
        {
            return 0;
        }
            ans=(ans*10)+digit;
            a=a/10;
        }
        return ans;
    }
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        if(x==reverse(x)){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int long long sum=0;
        int y=x;
        while(x>0){
            int temp=x%10;
            sum=sum*10+temp;
            x=x/10;
        }
        if (sum > INT_MAX || sum < INT_MIN)
            return 0;
        if(y==sum)
            return true;
        else
            return false;
    }
};
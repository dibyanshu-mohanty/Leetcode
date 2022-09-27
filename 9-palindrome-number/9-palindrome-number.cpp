class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        string temp = num;
        int len = num.length();
        int i=0;
        int n = len-1;
        while (i<=n){
            swap(num[i],num[n]);
            n -= 1;
            i +=1;
        }
        if(num==temp){
            return true;
        }
        return false;
    }
};
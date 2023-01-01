class Solution {
public:
    
    int countDigits(int num) {
        int temp = num;
        int count;
        int digit;
        while(temp>0)
        {
            digit = temp%10;
            if(num%digit==0)
                count++;
            temp/=10;
        }
        return count;
    }
};
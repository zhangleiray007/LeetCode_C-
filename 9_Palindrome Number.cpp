class Solution {
public:
    bool isPalindrome(int x) {
        long temp=abs(x);
        long out=0;
        while(temp>0){
            out=10*out+temp%10;
            temp=temp/10;
        }
        if (out==abs(x) && x >= 0 && abs(x)<pow(2,31)){
            return true;
        }
        else{ 
            return false;
        }
            
        }


        
};
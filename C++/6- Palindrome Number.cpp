class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        return false;
        if (x!=0 and x%10 ==0)
        return false;
        int reverse = 0;
        while(x>reverse)
        {
            reverse = reverse*10 + x%10;
            x = x/10;
            /*
            let x = 5225
            reverse = 0
            step 1: reverse = 10*0 + 5225&10 = 5
            x = 522

            step 2: x is still greater than reverse 
            reverse = 5*10 + 522%10 = 52
            x = 52

            step 3: 
                    x is equal to reverse. palindrome found
        */


        }
        if (x==reverse)
        {return true;
        
        }

        if (x==reverse/10)
        {return true;

        }
        return false;        
    }
};
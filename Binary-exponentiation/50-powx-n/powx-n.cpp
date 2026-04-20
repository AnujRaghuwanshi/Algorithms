class Solution {
public:
    double myPow(double x, int n) {
        long b_form = n;

        if(n < 0){
            x = 1/x;
            b_form = -b_form;
        }

        double res = 1;

        while(b_form > 0){
            if(b_form % 2 == 1){     //update the result for set bit only
                res *= x;
            }
            x *= x;
            b_form /= 2;             //this is right shift to check for last bit 0/1
        }
        
        return res;
    }
};

// Binary exponentiation, also known as exponentiation by squaring, is an efficient algorithm to calculate large powers of a number (a^n) in time O(logn), 
// compared to the time required by naive multiplication O(n).
// Any integer can be written as a sum of powers of two (e.g., which is 1101 in binary).
    
// Rule for Even : a^n = (a^n/2)^2
// Rule for Odd : a^n = a . (a^n/2)^2






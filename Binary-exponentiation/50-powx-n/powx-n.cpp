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
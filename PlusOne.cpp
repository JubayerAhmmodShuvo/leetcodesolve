class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int d= digits.size()-1;
        while (d>=0){
            if(digits[d]==9)
                digits[d]=0;
            else{
                digits[d]+=1;
                return digits;
            }
            d--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

/*Solution 2*/



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int carry  =1;
        int n= digits.size();
        for(int i=n-1; i>=0; i-- ){
            int num = digits[i]+carry;
            digits[i]=num%10;
            carry=num/10;
        }
        if(carry>0){
            digits.push_back(0);
              int n= digits.size();
             for(int i=n-1; i>0; i-- ){
                 digits[i]=digits[i-1];
             }
            digits[0]=carry;
        }
        return digits;
    }
};
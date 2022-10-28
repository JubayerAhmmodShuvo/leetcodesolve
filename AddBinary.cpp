class Solution {
public:
    string addBinary(string a, string b) {
        int first= a.length();
        int second=b.length();
        int i=0,carry=0;
        string ans="";
        while(i<first || i<second || carry!=0){
            int x=0;
            if(i<first && a[first-i-1]=='1'){
                x=1;
            }
            int y=0;
            if(i<second && b[second-i-1]=='1'){
                y=1;
            }
            ans=to_string((x+y+carry)%2) + ans;
            carry=(x+y+carry)/2;
                i+=1;
        }
        return ans;
        
    }
};
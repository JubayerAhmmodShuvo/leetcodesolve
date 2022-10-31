class Solution {
public:
    bool isPalindrome(string s, int i, int j){
        while(i<j){
            if(s.at(i)==s.at(j)){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
    
    
    bool validPalindrome(string s) {
        int i=0;
        int j= s.size()-1;
        while(i<j){
            if(s.at(i)==s.at(j)){
                i++;
                j--;
            }
            else{
                return isPalindrome (s, i+1, j) || isPalindrome (s,i,j-1);
            }
        }
        return true;
    }
};

// Path: ValidPalindrome.cpp
// int i=0;
// int j=s.size()-1;
// int cnt=0;
// while(i<j){
//   if(s[i]==s[j]){
//     i++;
//     j--;
//   }else{
//     cnt++;
//     i++;
//   }
//   if(cnt<1){
//     break;
//   }
// }

// int s=0;
// int e=s.size()-1;
// int cnt1=0;
// while(s<n){
//   if(s[i]==s[j]){
//     s++;
//     e--;

//   }else{
//     cnt1++;
//     e--;
//   }
//   if(cnt1<1){
//     break;
//   }
// }

// if(cnt==1 || cnt1==1)
// return true;

// if(cnt==0 || cnt == 0)
// return true;

// return false;
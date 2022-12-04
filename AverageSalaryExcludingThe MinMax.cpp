
class Solution {
public:
    double average(vector<int>& salary) {
        double n= salary.size();
        double maxi= INT_MIN;
        double min= INT_MAX;
        double allsum=0;
        for(int i=0; i<n;i++){
            if(salary[i]>maxi) maxi= salary[i];
            if(salary[i]<min) min= salary[i];
            allsum+= salary[i];
        }
        double ans;
        ans=(allsum-maxi-min)/(n-2);
        return ans;
        
    }
};
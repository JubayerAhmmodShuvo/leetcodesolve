class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
       int ans = -1;
       int small_dist= INT_MAX;
       for(int i=0; i<points.size(); i++){
        if(points[i][0]==x or points[i][1]==y){
          int dist= abs(points[i][0]-x)+abs(points[i][1]-y);
          if(dist<small_dist){
            small_dist=dist;
            ans=i;
          }
        
        }
       }
       return ans;
    }
};
//https://leetcode.com/problems/container-with-most-water/
int maxArea(vector<int>& height) {
        int n=height.size();
       int ans=0;

       int fst=0;
       int sec=n-1; 

       while(fst<sec){
           ans=max(ans , (sec-fst)*min(height[fst],height[sec]));

           if(height[fst]<height[sec]){
               fst++;
           }else{
               sec--;
           }
       }
       return ans;
    }
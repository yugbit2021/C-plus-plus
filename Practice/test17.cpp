//https://leetcode.com/problems/boats-to-save-people/
 int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
      sort(people.begin(),people.end());
      int boat=0;
      int i=0;
      int j=n-1;  
      while(i<=j){
          if(people[i]+people[j]<=limit){
              boat++;
              i++;
              j--;
          }
          else{
              boat++;
              j--;
          }
      }
      return boat;
    }
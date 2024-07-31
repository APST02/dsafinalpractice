class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int startingrow=0;;
        int startingcol=0;
        int endingrow=row-1;
        int endingcol=col-1;
        int count=0;
        int total=row*col;
        while(count<total){
            if(count<total){
            for(int i=startingcol;i<= endingcol;i++)
            {
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            }
             if(count<total){
            for(int i=startingrow;i<=endingrow;i++){
                 ans.push_back(matrix[i][endingcol]);
                 count++;
            }
            endingcol--;
             }
              if(count<total){
            for(int i=endingcol;i>=startingcol;i--){
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;
              }
              if(count<total){
        for(int i=endingrow;i>=startingrow;i--){
            ans.push_back(matrix[i][startingcol]);
            count++;
        }
          startingcol++;
         }
        }
        
      return ans;
    }
  
};
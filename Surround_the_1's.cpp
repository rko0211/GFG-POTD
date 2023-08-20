class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int ans =0;
        for(int i =0; i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                int zero_count =0;
                
                
                if(matrix[i][j]==1){
                    // Left element
                    if((j-1)>=0 && matrix[i][j-1]==0){
                        zero_count++;
                    }
                    // right element
                    
                    if((j+1)<matrix[i].size() && matrix[i][j+1]==0){
                        zero_count++;
                    }
                    // above element
                    if((i-1)>=0 && matrix[i-1][j]==0){
                        zero_count++;
                    }
                    // bello element
                    
                    if((i+1)<matrix.size() && matrix[i+1][j]==0){
                        zero_count++;
                    }
                    
                    // For diagonal elements
                    
                //  north-west direction diagonal
                if((i-1)>=0 && (j-1)>=0 && matrix[i-1][j-1]==0){
                    zero_count++;
                }
                
                // North - east dierection diagonal element
                if((i-1)>=0 && (j+1)<matrix[i-1].size() && matrix[i-1][j+1]==0){
                    zero_count++;
                }
                // south-west direction diagonal
                if((i+1)<matrix.size() && (j-1)>=0 && matrix[i+1][j-1]==0){
                    zero_count++;
                }
                // south-east direction diagonal
                if((i+1)<matrix.size() && (j+1)<matrix[i+1].size() && matrix[i+1][j+1]==0){
                    zero_count++;
                }
                
                
           
                }
                if(zero_count%2==0 && zero_count>0){
                    ans++;
                }
                
            }
        }
        return ans;
    }
};

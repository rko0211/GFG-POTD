class Solution {
public:
bool isPossible(int i, int j, vector<vector<char>>&grid, string &word, int dir,int idx){
    // Base case 
    if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!=word[idx]) return false;
    if(word[idx]==grid[i][j] && idx==word.size()-1) return true;
    
    // recursive call
     if(dir==1) return isPossible(i+1,j,grid,word,dir,idx+1);
     if(dir==2) return isPossible(i-1,j,grid,word,dir,idx+1);
     if(dir==3) return isPossible(i,j-1,grid,word,dir,idx+1);
     if(dir==4) return isPossible(i,j+1,grid,word,dir,idx+1);
     if(dir==5) return isPossible(i-1,j-1,grid,word,dir,idx+1);
     if(dir==6) return isPossible(i-1,j+1,grid,word,dir,idx+1);
     if(dir==7) return isPossible(i+1,j-1,grid,word,dir,idx+1);
     if(dir==8) return isPossible(i+1,j+1,grid,word,dir,idx+1);
     
}
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    vector<vector<int>>ans;
	    for(int i=0;i<grid.size();i++){
	        for(int j=0;j<grid[0].size();j++){
	           // i,j it has 8 direction 
	           for(int dir =1;dir<=8;dir++){
	               if(isPossible(i,j,grid,word,dir,0)){
	                   ans.push_back({i,j});
	                   break; 
	               }
	           }
	        }
	    }
	    return ans;
	}
};

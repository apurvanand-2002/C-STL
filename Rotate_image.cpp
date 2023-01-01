class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        //transposing:
        for(int i=0;i<row;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // int startingCol=0;
        // int endingCol=col-1;
        // while(startingCol<=endingCol){
        //     for(int i=0;i<row;i++){
        //         swap(matrix[i][startingCol],matrix[i][endingCol]);
        //     }
        //         startingCol++;
        //         endingCol--;
        // }

        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

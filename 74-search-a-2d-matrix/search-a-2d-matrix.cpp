class Solution {
    // private:
    // bool performInnerBinarySearch(int nl, int nr, int mid,int target,vector<vector<int>>& matrix){
    //     while (nl < nr){
    //             int nmid = nl + (nl + nr)/2;
    //             if (matrix[mid][nmid] == target){
    //                 return true;
    //             }
    //             else if (matrix[mid][nmid] < target){
    //                 nl = nmid+1;
    //             }
    //             else{
    //                 nr = nmid-1;
    //             }

    //         }
    //         return false;
    // }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int m = matrix[0].size();
        int bottom = matrix.size()-1;
        int nl = 0;
        int nr = matrix[0].size()-1;

        while (top <= bottom){
            int mid = top + (bottom - top)/2;
            if (matrix[mid][0] <= target and matrix[mid][m-1] >= target){
                // return performInnerBinarySearch(nl,nr,mid,target,matrix);
                while (nl <= nr){
                    int nmid = nl + (nr - nl)/2;
                    if (matrix[mid][nmid] == target){
                        return true;
                    }
                    else if (matrix[mid][nmid] < target){
                        nl = nmid+1;
                    }
                    else{
                        nr = nmid-1;
                    }

            }
            return false;
            }
            else if (matrix[mid][0] > target){
                bottom = mid-1;
            }
            else{
                top = mid+1;
            }


        }
        return false;
        
    }
    
};
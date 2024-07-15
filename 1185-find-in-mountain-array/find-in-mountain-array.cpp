/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
    private:
    int searchRight(int target, MountainArray &mountainArr, int l, int r){
        while (l<=r){
            int mid = l + (r-l)/2;
            if (mountainArr.get(mid)==target) return mid;
            else if (mountainArr.get(mid) > target) l = mid+1;
            else r = mid-1;
        }
        return -1;
    }
    int searchLeft(int target, MountainArray &mountainArr, int l, int r){
        while (l<=r){
            int mid = l + (r - l)/2;
            if (mountainArr.get(mid)==target) return mid;
            else if (mountainArr.get(mid) > target) r = mid-1;
            else l = mid+1;
        }
        return -1;

    }
    int getIndex(int peak, int target, MountainArray &mountainArr){
        int n = mountainArr.length();
        int leftAns = searchLeft(target, mountainArr,0,peak);
        if (leftAns!=-1){
            return leftAns;
        }
        int rightAns = searchRight(target, mountainArr,peak+1,n-1);
        // cout << leftAns << endl;
        // cout << rightAns << endl;
        return rightAns;
        
    }
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int l = 0, h = n-1;
        int peak;
        int ind = -1;
         while (l < h) {
            int mid = l + (h - l) / 2;
            int midVal = mountainArr.get(mid);
            int midNextVal = mountainArr.get(mid + 1);

            if (midVal < midNextVal) {
                l = mid + 1;
            } else {
                h = mid;
            }
        }
        peak = l;
        
        ind = getIndex(peak,target,mountainArr);
        // peak, target,mountainArr);


        return ind;
        
        
    }
};
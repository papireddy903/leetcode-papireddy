class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        num3 = nums1+nums2
        num3.sort()
        print(num3)
        half = len(num3)//2
        if len(num3)%2==0:
            return (num3[half-1]+num3[half])/2
        else:
            return num3[half]
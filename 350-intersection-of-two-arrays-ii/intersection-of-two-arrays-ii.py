class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        
        nums1.sort()
        nums2.sort()

        i = 0 
        j = 0 

        n = len(nums1)
        m = len(nums2)

        ans = []

        while i<n and j<m:
            if nums1[i] == nums2[j]:
                ans.append(nums1[i]) 
                i+=1 
                j+=1 
            elif nums1[i] > nums2[j]:
                j+=1 
            else:
                i+=1 
        return ans
                
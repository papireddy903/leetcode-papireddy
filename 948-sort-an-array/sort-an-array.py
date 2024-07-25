class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        priority_queue = heapq.heapify(nums)

        sorted_array = [heapq.heappop(nums) for _ in range(len(nums))]

        return sorted_array

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        total = sum(nums)
        n = len(nums)
        sumofn = (n*(n+1))//2
        missing = sumofn-total
        return missing
class Solution(object):
    def getConcatenation(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n=len(nums)
        ans=[]
        for i in range(2*n):
            ans.append(nums[i%n])
        return ans
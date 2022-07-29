class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        median=0;
        nums3=nums1+nums2
        nums3.sort()
        
        def mid(nums):
            l=len(nums)
            if(l%2==0):
                return (nums[l//2]+nums[l//2-1])/2.0
            else:
                return nums[l//2]/1.0

        return mid(nums3)
    

    
    
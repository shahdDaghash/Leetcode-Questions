class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l=[]
        for num in nums:
            if num in l:
                l.remove(num)
            else:
                l.append(num)
        return l[0]

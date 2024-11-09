class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        a=len(nums)
        i=0
        while(i<a):
            if(nums[i]>=target):
                break
            i+=1
        return i

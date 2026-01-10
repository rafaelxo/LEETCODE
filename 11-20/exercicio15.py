class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        resp = []
        n = len(nums)
        i = 0
        while i < n - 2:
            a = nums[i]
            if a > 0: break
            if a + nums[i + 1] + nums[i + 2] > 0: break
            if a + nums[n - 2] + nums[n - 1] < 0:
                i += 1
                continue
            left, right = i + 1, n - 1
            target = -a
            while left < right:
                s = nums[left] + nums[right]
                if s == target:
                    resp.append([a, nums[left], nums[right]])
                    left += 1
                    right -= 1
                    while left < right and nums[left] == nums[left - 1]: left += 1
                    while left < right and nums[right] == nums[right + 1]: right -= 1
                elif s < target: left += 1
                else: right -= 1
            i += 1
            while i < n - 2 and nums[i] == nums[i - 1]: i += 1
        return resp


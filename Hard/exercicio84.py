class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack = [-1]
        resp = 0
        n = len(heights)
        for i in range(n):
            while stack[-1] != -1 and heights[stack[-1]] > heights[i]:
                h = heights[stack.pop()]
                w = i - stack[-1] - 1
                area = h * w
                if area > resp: resp = area
            stack.append(i)
        while stack[-1] != -1:
            h = heights[stack.pop()]
            w = n - stack[-1] - 1
            area = h * w
            if area > resp: resp = area
        return resp

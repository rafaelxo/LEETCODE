class Solution:
    def romanToInt(self, s: str) -> int:
        equ = { "I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000 }
        resp = 0
        for i in range(len(s)):
            if i + 1 < len(s) and equ[s[i]] < equ[s[i + 1]]: resp -= equ[s[i]]
            else: resp += equ[s[i]]
        return resp
